#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int no;
	cout<<"Enter NO value:";
	cin>>no;
	try
	{
		if(no==1)
		{
			throw 1;
		}
		else if(no==2)
		{
			throw 5.6f;
		}
		else if(no==3)
		{
			throw 'c';
		}
		else
		{
			throw "Exception Occures";
		}
	}
	catch(...)
	{
		cout<<"Exceptions Occures ";
	}
	
	return 0;
}
