#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//
//
//	}
//	*dest = *src;   //如果没有这行代码  \0  拷贝不过去  字符串变成  helloxxxxx
//	
//}



//优化代码

char* my_strcpy(char* dest,const char* src)  //*src 的值不能改变
{
	assert(dest != NULL);  //断言
	assert(src != NULL);
	char* ret = dest;   //备份首元素地址
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}



int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	
	printf("%s\n", my_strcpy(arr1, arr2));  //链式访问


	return 0;
}