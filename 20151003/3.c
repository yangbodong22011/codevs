/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 03 Oct 2015 15:19:46 CST
 ************************************************************************/
//车费的罚单
#include<stdio.h>
int main(int argc,char *argv[])
{
    int i,j,k;

    printf("Enter the speed limit: ");
    scanf("%d",&i);
    printf("Enter the recorded speed of the car: ");
    scanf("%d",&j);
    k = j - i;
    if(k <= 0)
        printf("Congratulations,you are within the speed limit\n");
    if(k >= 1 && k <= 20)
        printf("you are speeding and your fine is $ 100\n");
    if(k >= 21 && k <= 30)
        printf("you are speeding and your fine is $ 270\n");
    if(k >= 31)
        printf("you are speeding and your fine is $ 500\n");
}

