/*************************************************************************
	> File Name: 6.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 16:25:05 CST
 ************************************************************************/
//输入一个数(是两个质数之积,要求输出较大质数的值)
#include<stdio.h>

int prime(unsigned long long n)
{
    unsigned long long  i;
    for(i = 2;i*i < n;i++)
    {
        if((int)n%i == 0)
            return 0;
    }
    return 1;
}

int main(int argc,char *argv[])
{
    unsigned long long int n,i;
    scanf("%llu",&n);
    for(i = 2;i <= n/2;i++)
    {
        if(n%i == 0)
        {
            if((prime(i) == 1) && (prime(n/i) == 1))
            {
                printf("%llu\n",n/i);
                return 0;
            }
        }
    }
}
