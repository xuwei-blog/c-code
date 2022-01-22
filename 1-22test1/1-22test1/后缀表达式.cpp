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


float calPostfix(char exp[])
{
	float s[maxSize];
	int top = -1;
	int i = 0;
	for(i =0;exp[i] != '\0';i++)
	{
		if ('0' <= exp[i] && exp[i] <= '9')
		{
			s[++top] = exp[i] - '0';
		}

		else
		{
			float opnd1, opnd2, result;
			char op;
			int flag;

			opnd2 = s[top--];
			opnd1 = s[top--];
			op = s[top--];
			flag = calSub(opnd1, op, opnd2, result);
			if (flag == 0)
			{
				cout << "error" << endl;
				break;
			}
			s[++top] = result;

		}

	}
	return s[top];
}

