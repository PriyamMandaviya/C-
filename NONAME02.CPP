#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=50,sum=0,sum1=0;
 while(a<=100)
 {
    if(a%2==0)
    {
      sum=sum+a;
    }
    else
    {
      sum1=sum1+a;
    }
    a=a+1;
 }
 printf("even sum=%i\n",sum);
 printf("Odd sum=%i\n",sum1);
 getch();
}