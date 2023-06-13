#include <iostream>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[10],t;
	int i,j,n;
	printf("Enter string:");
	gets(a);
	n=strlen(a);
	strrev(a);
	
	puts(a);
	
	return 0;
}
