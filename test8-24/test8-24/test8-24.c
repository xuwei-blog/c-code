#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

    int a = 0;
    printf("加入比特;>\n");
    printf("要不要好好学习?>(1/0)");
    scanf("%d", &a);
    if (a ==1)
        printf("拿到好offer\n");
    else
        printf("回家卖红薯\n");



    return 0;
}