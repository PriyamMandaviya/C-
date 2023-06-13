#include<iostream.h>
#include<conio.h>
class Student
{
  int id,s1,s2,s3,total,avg;
  char name[20],grade;
  public:
	 void input()
	 {
	   cout<<"Enter id,name,s1,s2,s3"<<endl;
	   cin>>id>>name>>s1>>s2>>s3;
	 }
	 void generateGrade()
	 {
	   total=s1+s2+s3;
	   avg=total/3;
	   if(avg>=35 && avg<=50)
	   {
	      grade='C';
	   }
	   else if(avg>50 && avg<=70)
	   {
	      grade='B';
	   }
	   else if(avg>70 && avg<=100)
	   {
	      grade='A';
	   }
	   else
	   {
	      grade='F';
	   }
	 }
	 void show()
	 {
	   cout<<id<<"\t"<<name<<"\t"<<s1<<"\t"<<s2<<"\t"<<s3<<"\t"<<total<<"\t"<<avg<<"\t"<<grade<<"\n";
	 }
};

void main()
{
  clrscr();
  Student s[10];
  int n,i;
  cout<<"How many student details store in array:";
  cin>>n;
  for(i=0; i<n; i++)
  {
    s[i].input();
    s[i].generateGrade();
  }
  cout<<"id\tname\ts1\ts2\ts3\ttotal\tavg\tgrade\n";
  for(i=0; i<n; i++)
  {
     s[i].show();
  }
  getch();
}