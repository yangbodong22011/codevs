/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 15:37:19 CST
 ************************************************************************/
//钓鱼问题
#include<stdio.h>

int main(int argc,char *argv[])
{
    int a[4];
    int i;
    for(i = 0;i < 4;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0]-a[1]>0) && (a[1]-a[2]>0) && (a[2]-a[3]>0))
        printf("Fish Diving\n");
    else if((a[0]-a[1]<0) && (a[1]-a[2]<0) && (a[2]-a[3]<0))
        printf("Fish Rising\n");
    else if((a[0]-a[1] == 0) && (a[1]-a[2] == 0) && (a[2]-a[3] == 0))
        printf("Fish At Constant Depth\n");
    else
        printf("No Fish\n");

    return 0;
}
