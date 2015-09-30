/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 28 Sep 2015 17:22:59 CST
 ************************************************************************/
//输入一句话,例如 i love you 将单词倒转输出 you love i
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char word[1000][1000] = {0};
    char a[1000] = "";
    int  i,k = 0,j = 0,s = 1,flag = 0;
    char ch;
    while((ch = getchar()) != '\n')
    {
        a[k++] = ch;
    }
    a[k] = '\0';
    for(k = 0;k < (int)strlen(a);k++)
    {
                if(a[k] != ' ')
                {
                    word[s][j] = a[k];
                    j++;
                }
                else
                {
                    if(s == 1)
                    {
                        word[s][j] = '\0';
                    }
                    word[s][j] = ' ';
                    s++;
                    j = 0;
                }
    }
    word[s][j] = ' ';
    word[1][(int)strlen(word[1])-1] = '\0';
    for(i = s;i;i--)
    {
        printf("%s",word[i]);
    }
    return 0;
}
