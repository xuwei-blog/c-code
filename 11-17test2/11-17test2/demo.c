#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//打开文件
	char arr[10] = "xxxxxxx";
	FILE* pf = fopen("test.dat","w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//读文件-字符
	int ret = fgetc(pf);
	printf("%c",ret);
	ret = fgetc(pf);
	printf("%c", ret);
	ret = fgetc(pf);
	printf("%c", ret);

	//写入字符
	fputc('b',pf);
	fputc('i',pf);
	fputc('t',pf);

	//读字符串
	fgets(arr, 4, pf);    //4的含义  3个字符和1个‘\0’
	
	//关闭文件
	fclose(pf);
	pf = NULL;
				
	return 0;
}