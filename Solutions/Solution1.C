/*write a program to enter any number and print sum of its digits
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r,sum=0;
    clrscr();
    printf("\n Enter value for a");
    scanf("%d",&a);
    while(a>0)
    {
       r=0%10;
       sum=sum+r;
       a=a/10;
    }
    printf("\n sum of digits:%d",sum);
    getch();
}