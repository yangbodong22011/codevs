/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 14:38:38 CST
 ************************************************************************/
//津津的存储计划
#include<stdio.h>
int main(int argc,char *argv[])
{
    int a[12];                //每个月的预算
    int i,j,y = 0;
    float k = 0;
    
    for(i = 0;i < 12;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 12;i++)
    {
        y += (300 - a[i]);
        if(y >= 100)
        {
            k += (y/100)*100;
            y -= (y/100)*100;
        }
        if(y < 0)
        {
            printf("%d\n",-(i+1));
            return 0;
        }
    }
    k = 1.2 * k;
    printf("%d\n",(int)k+y);
}
