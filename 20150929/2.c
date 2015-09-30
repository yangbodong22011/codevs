//cantor表,即螺旋矩阵,或者蛇形矩阵



#include<stdio.h>
int main(int argc,char *argv[])
{
    int a[1000][1000]={0};
    int i,j,k=1,n,t=1,m,x,y;                      //t为转向的标记 
    scanf("%d",&m);                               //上图所示m的值为9
    for(i=1;i<=1000;i++)                          //此外层循环总共循环9次
    {
        for(j=1;j<=i;j++)     
        {
            if(t==-1)
            {
                a[j][i-j+1]=k++;
                if(a[j][i-j+1] == m)
                {
                    x = j;
                    y = i-j+1;
                }
            }
            else
            {    
                a[i-j+1][j]=k++;
                if(a[i-j+1][j] == m)
                {
                    x = i-j+1;
                    y = j;
                }
            }
            
        }
        t=-t;
    }                                         //此时左上三角赋值完毕
    for(i=2,n=2;i<=1000;i++,n++)                 //首先判断外层循环执行的次数为8次
    {
        for(j=n;j<=m;j++)                     //内层循环的次数随着外层循环的执行而减少
        {
            if(t==-1)
            {
                a[j][i-j+m]=k++;
                if(a[j][i-j+m] == m)
                {
                    x = j;
                    y = i-j+m;
                }
            }
            else
            {
                a[i-j+m][j]=k++;
                if(a[i-j+m][j] == m)
                {
                    x = i-j+m;
                    y = j;
                }
            }
        }
        t=-t;
    }
    printf("%d/%d\n",x,y);
}
