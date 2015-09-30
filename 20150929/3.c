/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Tue 29 Sep 2015 15:58:06 CST
 ************************************************************************/

#include<stdio.h>

int main(int argc,char *argv[])
{
    int  e,s,w,n;            //四个方向
    int  i,j,k = 1,num;      //k :从1开始每次递增
    int  x,y;                //1 的位置坐标

    int ar[100][100] = {0};
    scanf("%d",&num);
    x = num/2;
    y = num/2;
    int a = num/2*2+1;
    printf("a:%d\n",a);
    for(i = 1;i<= num*num;i++)
    {
    	if(x <= (a-y-1) && x>=y)
        {
            ar[y][x]=i;
            x++;
        }
        else if(x > (a-y-1) && x>y)
        {
            ar[y][x]=i;
            y++;
        }       
        else if(x > (a-y-1) && x<=y)
        {
            ar[y][x]=i;
            y--;
        }
        else if(x <= (a-y-1) && x<y)
        {
            ar[y][x]=i;
            x--;
        }
    }
    for(i = 0;i < num;i++)
    {
        for(j = 0;j < num;j++)
        {
            printf("%4d ",ar[i][j]);
        }
        printf("\n");
    }
        



}
