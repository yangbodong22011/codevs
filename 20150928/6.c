/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Sep 2015 21:54:10 CST
 ************************************************************************/
//桶排序
#include<stdio.h>
int main(int argc,char *argv[])
{
    int n,i,j,k,t;
    int a[100000];
    scanf("%d",&n);
    for(i = 0;i < 100000;i++)
    {
        a[i] = 0;
    }
    for(k = 0;k < n;k++)
    {
        scanf("%d",&t);
        a[t]++;
    }
    for(i = 0;i < 100000;i++)
        for(j = 1;j <= a[i];j++)
            printf("%d ",i);
    printf("\n");

}
