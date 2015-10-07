o/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 29 Sep 2015 14:51:45 CST
 ************************************************************************/
//二位数组存取并且分行显示
#include<stdio.h>
int main(int argc,char *argv[])
{
    int  i,k,n;
    int  a[100][100];
    scanf("%d",&n);
    for(i = 0;i < n; i++)
        for(k = 0;k < n;k++)
            {
                scanf("%d",&a[i][k]);
            }
    for(i = 0;i < 2; i++)
    {
        for(k = 0;k < 2;k++)
        {
                printf("%d ",a[i][k]);
        }
        printf("\n");
    }
                                    
}
