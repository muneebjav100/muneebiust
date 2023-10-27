// nesting of if-else : e.g. comparing 3 numbers(order of 3 numbers)
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter three integers\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>b && a>c)
	{
		if(b>c)
		printf("%d>%d>%d",a,b,c);
		if(c>b)
		printf("%d>%d>%d",a,c,b);
		if(b==c)
		printf("%d>%d=%d",a,b,c);
	}
	
	if(b>a && b>c)
	{
		if(a>c)
		printf("%d>%d>%d",b,a,c);
		if(c>a)
		printf("%d>%d>%d",b,c,a);
		if(a==c)
		printf("%d>%d=%d",b,a,c);
	}
		
	if(c>a && c>b)
	{
		if(a>b)
		printf("%d>%d>%d", c,a,b);
		if(b>a)
		printf("%d>%d>%d",c,b,a);
		if(a==b)
		printf("%d>%d=%d",c,a,b);
	}
	
	if(a==b && a>c)
	printf("%d=%d>%d", a,b,c);
	if(a==c && a>b)
	printf("%d=%d>%d", a,c,b);
	if(b==c && b>a)
	printf("%d=%d>%d", b,c,a);
	
	if(a==b && a==c)
	printf("%d=%d=%d", a,b,c);
}