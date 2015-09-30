/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 27 Sep 2015 19:01:42 CST
 ************************************************************************/
//机票打折,要求可以在个位上四舍五入   例如 822.6  输出820
#include<stdio.h>
int main(int argc,char *argv[])
{
    int i;
    float b;
    int x,z;
    scanf("%d %f",&i,&b);
    z = i * b;
    x = z%100;
    if(x >= 0 && x <= 49)
        printf("%d\n",z/100*10);
    if(x >= 50 && x <= 99)
        printf("%d\n",(z/100+1)*10);

}
