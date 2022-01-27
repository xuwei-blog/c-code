//À¨ºÅÆ¥Åä
int isMatched(char left, char right)
{
	if (left == '(' && right == ')')
		return 1;
	else if (left == '[' && right == ']')
		return 1;
	else if (left == '{' && right == '}')
		return 1;
	else
		return 0;
}

#define maxSize 100
int isParenthesesBalanced(char exp[])
{
	char s[maxSize];
	int top = -1;
	for (int i = 0; exp[i] != '\0'; i++)
	{
		if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
			s[++top] = exp[i];
		if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
		{
			if (top == -1)
				return 0;
			char left = s[top--];   //³öÕ»¼ì²â
			if (isMatched(left, exp[i]) == 0)
				return 0;
		}
	}
	if (top > -1)
		return 0;
	return 1;

}