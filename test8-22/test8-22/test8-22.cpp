

#include <stdio.h>
#include <string.h>

int main()
{


    
    char arr1[] = "abc";     //默认有个\0作为技术标志
    char arr2[] = { 'a','b','c' };     //如果不手动添加\0,就会随便从内存里拿出东西

    //求字符串长度
    int len = strlen("abc");      //string length   需要引用头文件   计算长度的时候不包含\0
    printf("%d\n", len);

    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}