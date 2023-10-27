//recursion : nth term of Fibonacci sequence

#include<stdio.h>
int fib(int);

int main()
{
	int n, x;
	printf("Enter the ordinality of the term ");
	scanf("%d", &n);
	
	if(n<=0)
	printf("Invalid input!");
	else
	{
		x = fib(n);
		printf("The term is %d", x);
	}
}

int fib(int n)
{
	int a, b;
	
	if(n==1)
	return 1;
	
	if(n==2)
	return 1;
	
	else
	{
		a=fib(n-2);
		b=fib(n-1);
		return a+b;
	}
}