/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Sep 2015 16:24:41 CST
 ************************************************************************/
//输入一段字符,并且把它倒转
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char  ch = ' ';
    char  a[100] = "";
    char  b[100] = "";
    int   i = 0,k;
    while((ch = getchar()) != '\n')
    {
        a[i++] = ch;
    }
    printf("%d\n",(int)strlen(a));
    for(k = 0,i = (int)strlen(a)-1; k < (int)strlen(a);k++,i--)
    {
        b[k] = a[i];
    }
    for(k = 0;k < (int)strlen(b)+1;k++)
    printf("%c",b[k]);
    printf("\n");


}
