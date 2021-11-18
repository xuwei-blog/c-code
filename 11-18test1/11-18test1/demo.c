#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct S
{
	char arr[10];
	int num;
	float sc;
};
int main()
{
	struct S s = {"abcd",10,5.5f};


	//struct S s = {0};
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//写文件
	//fwrite(&s, sizeof(struct S), 1, pf);


	//读文件
	fread(&s,sizeof(struct S),1,pf);
	printf("%s %d %f\n",s.arr,s.num,s.sc);

	fclose(pf);
	pf = NULL;

	return 0;
}