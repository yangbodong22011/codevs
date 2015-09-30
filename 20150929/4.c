#include<stdio.h>
int main(int argc,char *argv[])
{
    int a[200][200]={0};
    int i=1,j,k=1,t,s,x,y;
    scanf("%d",&s);
    int i1=1,j1=1,x1=s-1,y1=s-1;
    int i2=s,j2=s,x2=2,y2=1;
    for(;k<=s*s;j1++,i1++,j2--,i2--,y1--,y2++,x1--,x2++)           
    {
        for(j=j1,i=i1;j<=j2;j++)             
        {
            a[i][j]=k++;
        }
        j--;
        for(i=i1+1;i<=i2;i++)               
        {
            a[i][j]=k++;
        }
        for(y=y1,x=x1+1;y>=y2;y--)              
        {
            a[x][y]=k++;
        }
        y++;
        for(x=x1;x>=x2;x--)            
        {
            a[x][y]=k++;
        }
    }
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
}
