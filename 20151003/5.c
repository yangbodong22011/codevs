/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 16:03:41 CST
 ************************************************************************/
//图形的拓宽
#include<stdio.h>

int main(int argc,char *argv[])
{
    int i,j,k,n;

    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
            printf("*");
        for(j = 0;j < n;j++)
            printf("x");
        for(j = 0;j < n;j++)
            printf("*");
        printf("\n");
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
            printf(" ");
        for(j = 0;j < n;j++)
            printf("x");
        for(j = 0;j < n;j++)
            printf("x");
        printf("\n");
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
            printf("*");
        for(j = 0;j < n;j++)
            printf(" ");
        for(j = 0;j < n;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
