using namespace std;
#include <iostream>
//ÇónextÊı×é

typedef struct str
{
	char* ch;
	int length;
}str;

int KMP(str str,str substr, int next[])
{
	int i = 1;
	int j = 1;
	while (i <= str.length && j <= substr.length)
	{
		if (j == 0 || str.ch[i] == substr.length)
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j > substr.length)
		return i - substr.length;
	else
		return 0;
}