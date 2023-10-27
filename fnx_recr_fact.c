//Recursion: fnx calling itself
//e.g. factorial of a number

#include<stdio.h>
int fact(int);
int main()
{
	int n, ans;
	printf("Enter a non-negative integer ");
	scanf("%d", &n);
	
	ans=fact(n);
	printf("%d! = %d", n, ans);
}

int fact(int n)

{
	if(n!=1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
