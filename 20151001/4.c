/*************************************************************************
	> File Name: 4.c
	> Author: 
	> Mail: 
	> Created Time: Thu 01 Oct 2015 14:39:40 CST
 ************************************************************************/
//m进制向n进制的转换
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc,char *argv[])
{
    char str[100];
    int  i,j,k = 0,len;
    scanf("%s",str);
    scanf("%d",&i);
    len = (int)strlen(str);
    for(j = 0;j < len;j++)
    {
        if(str[j] < 59)
        {
            k = k + pow(i,len-1-j)*(str[j]-48);
        }
        if(str[j] >= 59)
        {
            k = k + pow(i,len-1-j)*(str[j]-55);
        }

    }
    printf("%d\n",k);

    
    
}
