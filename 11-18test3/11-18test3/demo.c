#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch = fgetc(pf);
	printf("%c\n",ch);  
	
	fseek(pf,1,SEEK_CUR);  //fseek(流,偏移量,x)   x可以填SEEK_CUR  ;  SEEK_END  ; SEEK_SET

	ch = fgetc(pf); 
	printf("%c\n",ch);

	int ret = ftell(pf);    //ftell 返回文件指针初始位置的偏移量
	printf("%d",ret);

	rewind(pf);  //把文件指针返回到初始位置

	fclose(pf);
	pf = NULL;



	return 0;
}