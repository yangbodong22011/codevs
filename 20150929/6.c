
//最大公约数,欧几里得算法

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

int main(int argc,char *argv[])
{
    int m,n,ret;
    scanf("%d %d",&m,&n);
    ret = gcd(m,n);
    printf("%d\n",ret);
}

