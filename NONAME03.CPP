#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int no,i,sum=0,t;
 printf("Enter No:");
 scanf("%ld",&no);
 t=no;

 while(no>0)
 {
   i = no%10;
   sum=sum*10+i;
   no=no/10;
 }
 if(sum==t)
 {
   printf("No is pallindrome");
 }
 else
 {
   printf("No is not pallindrome");
 }

 getch();
}