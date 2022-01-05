/*write a program to enter any number and check its an armstrong number or not
date:24/12/21*/
#include<stdio.h>
#include<conio.h>
void main();
{
     int a,b,c=0,d;
     clrscr();
     printf("\n Enter any number:");
     scanf("%d",&a);
     d=a
     while(a>0)
     {
       b=a%10;
       c=c+b*b*b;
       a=a/10;
     }
     if(d==c)
	 printf("\n It is an armstrong number");
     else
	 printf("\n It is not an armstrong number");
     getch();
}