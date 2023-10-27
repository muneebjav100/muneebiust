//add and subtract two numbers using (user defined) fnxs

#include<stdio.h>

int add(int, int);   //fnx declaration
int sub(int, int);

int main()
{
	int a, b, sum, dif;
	printf("Enter two integes\n");
	scanf("%d%d", &a, &b);
	
	sum=add(a, b);  //fnx call
	printf("%d + %d = %d\n", a, b, sum);
	
	dif=sub(a, b);
	printf("%d - %d = %d\n", a, b, dif);
	
	dif=sub(b, a);
	printf("%d - %d = %d", b, a, dif);
}

//fnx definitions

int add(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

int sub(int x, int y)
{
	int z;
	z=x-y;
	return z;
}