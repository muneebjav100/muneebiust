//program in c to compare two numbers entered by the user
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d", &a,&b);
	
	if(a>b)
	printf("%d is greater than %d", a,b);
	if(b>a)
	printf("%d is greater than %d", b,a);
	if(a==b)
	printf("they are equal");
}