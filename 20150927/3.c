/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Sun 27 Sep 2015 19:26:48 CST
 ************************************************************************/
//寻找子串第一次出现的位置
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char a[100],b[100];
    int i = 0,k = 0,c = 0,n = 0,flag = 0;
    scanf("%s %s",a,b);
    for(k;k < (int)strlen(b)+1;k++)
    {
        while(i < (int)strlen(a)+1)
        {
            if(b[k] == a[i] && b[k] != '\0')
            {
                n = i;
                i++;
                c++;
                break;
            }
            else
            {
                if(c == (int)strlen(b) && (int)strlen(b) != 1)
                {
                    flag = 1;
                    break;
                }
                if(c == (int)strlen(b) && (int)strlen(b) == 1)
                {
                    flag = 2;
                    break;
                }

                if(c != (int)strlen(b))
                {
                    if(c != 0)
                    {
                        c = 0;
                        k = 0;
                        continue;
                    }
                    k = 0;
                    i++;
                    continue;
                }
            }
            
        }
        if(flag == 1 || flag == 2)
        {
            break;
        }
    }
    if(flag == 1)
        printf("%d\n",n - (int)strlen(b) + 2);
    if(flag == 2)
        printf("%d\n",n - (int)strlen(b)+ 3 );

}
