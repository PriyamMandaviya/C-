#include<iostream.h>
#include<conio.h>
class vehicle
{
  int cc;
  char brand[20];
  public:
	void set()
	{
	  cout<<"Enter brand name & CC:"<<endl;
	  cin>>brand>>cc;
	}
	void show()
	{
	  cout<<"Brand="<<brand<<endl;
	  cout<<"cc="<<cc<<endl;
	}
};
void main()
{
  clrscr();
  vehicle v3,v4;
  vehicle *v1=new vehicle;
  v1->set();
  v1->show();
  vehicle *v2;

  getch();
}