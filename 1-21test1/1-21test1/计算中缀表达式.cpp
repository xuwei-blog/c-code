#define maxSize 1000
#include <iostream>
using namespace std;
#define MIN 0.000001
#include <math.h>
int getPriority(char op)
{
	if (op == '+' || op == '-')
		return 0;
	else
		return 1;
}

int calSub(float opand1, char op, float opand2, float& result)
{
	if (op == '+')
		result = opand1 + opand2;
	if (op == '-')
		result = opand1 - opand2;
	if (op == '*')
		result = opand1 * opand2;
	if (op == '/')
	{
		if (fabs(opand2) < MIN)  //判断float 类型是否为 0 
			return 0;
		else
			result = opand1 / opand2;
	}
	return 1;
}


float calInfix(char exp[])
{
	float s1[maxSize];
	int top1 = -1;
	char s2[maxSize];
	int top2 = -1;
	int i = 0;
	while (exp[i] != '\0')
	{
		if ('0' <= exp[i] && exp[i] <= '9')
		{
			s1[++top1] = exp[i] - '0';
			i++;
		}
		else if (exp[i] == '(')
		{
			s2[++top2] = '(';
			i++;
		}
		else if (exp[i] == '+' ||
			exp[i] == '-' ||
			exp[i] == '*' ||
			exp[i] == '/')
		{
			if (top2 == -1 ||
				s2[top2] == '(' ||
				getPriority(exp[i]) > getPriority(s2[top2])
				)
			{
				s2[++top2] = exp[i];
				i++;
			}
			else
			{
				float opnd1 ,opnd2, result;
				
				char op;
				int flag;

				opnd2 = s1[top1--];
				opnd1 = s1[top1--];
				op = s2[top2--];
				flag = calSub(opnd1,op,opnd2,result);
				if (flag == 0)
				{
					cout << "error" << endl;
					return 0;
				}
				s1[++top1] = result;
			}
		}
		else if (exp[i] == ')')
		{
			while (s2[top2] != '(')
			{
				float opnd1, opnd2, result;

				char op;
				int flag;

				opnd2 = s1[top1--];
				opnd1 = s1[top1--];
				op = s2[top2--];
				flag = calSub(opnd1, op, opnd2, result);
				if (flag == 0)
				{
					cout << "error" << endl;
					return 0;
				}
				s1[++top1] = result;
			}
			top2--;
			i++;
		}
	}
	while (top2 != -1)
	{
		float opnd1, opnd2, result;

		char op;
		int flag;

		opnd2 = s1[top1--];
		opnd1 = s1[top1--];
		op = s2[top2--];
		flag = calSub(opnd1, op, opnd2, result);
		if (flag == 0)
		{
			cout << "error" << endl;
			return 0;
		}
		s1[++top1] = result;
	}
	return s1[top1];
}

