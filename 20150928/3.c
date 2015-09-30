
//句子翻转的另一种处理方法,从后面处理,遇到 空格 \n 就将一个单词输出,一次性遍历之后就可以全部处理.

#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    char s[200];
    int n,i,j,k;
    fgets(s,sizeof(s),stdin);
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
        if(s[i]==' ') 
        {
            for(j=i+1;j<n;j++)
            {
                if(s[j] == ' ' || j == n || s[j] == '\n')
                    break;
                printf("%c",s[j]);
            }
            printf(" ");
        }
        if(i==0)
        {
            for(k=0;;k++)
            { 
                if(s[k]==' ')
                    break;
                printf("%c",s[k]);  
            }
            printf(" ");   
        }
    }
        return 0;
}
