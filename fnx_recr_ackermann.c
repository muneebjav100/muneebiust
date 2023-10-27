//recursion : Ackermann fnx

#include<stdio.h>

int A(int, int);

int main()
{
	int m, n, x;
	printf("Enter the values of m and n\n");
	scanf("%d%d", &m, &n);
	
	if(m<0 || n<0)
	printf("Invalid values input!");
	else
	{
		x=A(m, n);
		printf("A(%d, %d) = %d", m, n, x);
	}
}
int A(int m, int n)
{
	if(m==0)
	return n+1;
	
	if(m>0 && n==0)
	return A(m-1, 1);
	
	if(m>0 && n>0)
	return A(m-1, A(m, n-1));
}