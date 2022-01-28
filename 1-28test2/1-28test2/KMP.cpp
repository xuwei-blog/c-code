#include <iostream>
using namespace std;

void GetNext(const char* sub, int* next,int lensub)
{
	next[0] = -1;
	next[1] = 0;
	int i = 2;
	int k = 0;
	while(i < lensub)
	{
		if (k ==-1 || sub[i - 1] == sub[k])
		{
			next[i] = k + 1;
			i++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
	
}

int KMP(const char* str, const char* sub, int pos)
{
	int lenstr = strlen(str);
	int lensub = strlen(sub);
	if (lenstr == 0 || lensub == 0)
		return -1;
	if (pos < 0 || pos >= lenstr)
		return -1;

	int* next = (int *)malloc(sizeof(int)*lensub);
	GetNext(sub,next,lensub);

	int i = pos; //±éÀúÖ÷´®
	int j = 0;  //±éÀú×Ö´®

	while (i < lenstr && j < lensub)
	{
		if (j== -1||str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j >= lensub)
		return i-j;
	return -1;
}

int main()
{
	cout << KMP("abcabcabcsabc","ac",0)<<endl;
	cout << KMP("adbacd","ac",0)<<endl;
	return 0;
}