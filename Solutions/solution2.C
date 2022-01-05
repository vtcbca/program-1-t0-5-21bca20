/*write program to print reverse number
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c=0;
     clrscr();
     printf("enter a value than you will reverse:");
     scanf("%d",&a);
     while(a!=0)
     {
       b=a%10;
       c=c*10+b;
       a/=10;
     }
       printf("reversed number=%d",c);
       getch();
}