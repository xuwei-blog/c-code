#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
#include <errno.h>
int main()
{
	//打开文件失败的时候,会返回NULL
	FILE* pf = fopen("test,txt","r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		perror("error");
		return 1;
	}
	//读文件


	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}