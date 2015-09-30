/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Sep 2015 20:28:26 CST
 ************************************************************************/
//排序并且剔除重复
#include<stdio.h>
int main(int argc,char *argv[])
{
    int  a[100];
    int  b[100];
    int  n,t;
    int  i,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < n;i++)
    {
        for(j = i+1;j < n;j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if(a[i] == a[j])
            {
                for(j;j < n;j++)
                {
                    a[j] = a[j+1];
                }
                n--;
                i = -1;
                break;
            }
        }
    }
    printf("%d\n",n);
    for(i = 0;i < n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
