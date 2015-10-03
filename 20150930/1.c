/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 30 Sep 2015 17:37:30 CST
 ************************************************************************/
//判断一个数是不是质数
#include<stdio.h>
int main(int argc,char *argv[])
{
    int i,j = 0,n;
    scanf("%d",&n);
    if(n == 2)
    {
        printf("\\t");
        return 0;
    }
    for(i = 2;i <= n;i++)
    {
        if(n % i == 0)
        {
            j++;
        }
    }
    if(j == 1)
        printf("\\t");
    else
        printf("\\n");

}
