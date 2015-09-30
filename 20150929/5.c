/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: Tue 29 Sep 2015 21:38:38 CST
 ************************************************************************/
//最大公约数和最小公倍数.
#include<stdio.h>

int gcd(int m,int n)
{
    int rem;
    while(n > 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    return m;
}
int max(int m,int n)
{
    int i;
    for(i = 1;i < m*n;i++)
    {
        if((i%m == 0) && (i%n == 0))
        {
            return i;
        }
    }
}
int main(int argc,char *argv[])
{
    int m,n,i,j,ret1,ret2,times = 0;
    scanf("%d %d",&m,&n);
    for(i = 1; i <= n;i++)
    {
        j = n/i * m;
        if(((ret1 = gcd(i,j)) == m) && ((ret2 = max(i,j)) == n))
        {
            times++;
        }
    }
    printf("%d\n",times);
                 
}
