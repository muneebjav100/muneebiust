//swaping two numbers using (user defined) fnxs

#include<stdio.h>

void swap(int, int);

int main()
{
	int a, b;
	printf("Enter two integes\n");
	scanf("%d%d", &a, &b);
	
	printf("The numbers before swaping are %d and %d", a, b);
	
	swap(a,b);
		
}

void swap(int x, int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	
	printf("\nThe numbers after swaping are %d and %d", x, y);
	
}