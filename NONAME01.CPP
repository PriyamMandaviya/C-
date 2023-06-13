#include<iostream.h>
#include<conio.h>
class Calc
{
  public:
	int sum(int a,int b)
	{
	  return a+b;
	}
	int sum(int a,int b,int c)
	{
	  return a+b+c;
	}
};
void main()
{
  clrscr();
  Calc c;
  cout<<"sum(int,int)="<<c.sum(20,30)<<endl;
  getch();
}