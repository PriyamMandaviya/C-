#include<stdio.h>
#include<conio.h>
#include<string.h>
union student
{
  int id;
  char name[20];
  float per;
};
void main()
{
  clrscr();
  union student s;
  s.id=101;
  printf("id=%d\n",s.id);
  strcpy(s.name,"harsh");
  printf("Name=%s\n",s.name);
  s.per=89.44;
  printf("Per=%f\n",s.per);
  getch();
}