/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 01 Oct 2015 08:59:54 CST
 ************************************************************************/
//将十进制数字n转换为m进制
#include<stdio.h>
int main(int argc,char *argv[])
{
    int  m,n,i = 0,j = 0;
    int  a[100] = {0},b[100] = {0};
    scanf("%d %d",&m,&n);
    a[0] = m % n;
    b[0] = m / n;
    while(b[j] != 0)
    {
        a[++i] = b[i-1] % n;
        b[++j] = b[j-1] / n;
    }
    for(j = i;j != -1 ;j--)
    {
        if(a[j] >= 10)
            printf("%c",a[j]+55);
        else
            printf("%d",a[j]);
    }
    printf("\n");
}
