//factorial of a number n
#include<stdio.h>
int main()
{
	int i,n, f=1;
	printf("enter the value of n\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		f=f*i;
		//f*=i;
	}
	printf("%d! = %d ",n, f);
}