//program in c to check whether a number entered by the user is even or odd
#include<stdio.h>
int main()
{
	int a;
	printf("enter any number\n");
	scanf("%d", &a);
	
	if(a%2==0)
	printf("%d is even", a);
	else
	printf("%d is odd", a);
}