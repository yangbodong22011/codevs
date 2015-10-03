/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 11:28:02 CST
 ************************************************************************/

#include<stdio.h>

//学生的GPA计算方法
int main(int argc,char *argv[])
{
    float  a[20][2] = {{0}};
    int    n,i;
    float  k = 0,s = 0,GPA;
    
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%f %f",&a[i][0],&a[i][1]);
    }
    for(i = 0;i < n;i++)
    {
        k = k + (a[i][0]*a[i][1]);
        s += a[i][0];
    }
    GPA = k / s;
    printf("%.2f\n",GPA);

    
    

}
