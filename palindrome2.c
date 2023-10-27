//program in c to check whether a string is palindrome or not (using string functions)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[20], b[20];
	int i;
	printf("enter any string\n");
	scanf("%s", a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0)
	printf("it is a palindrome");
	else
	printf("it is not a palindronme");
}
