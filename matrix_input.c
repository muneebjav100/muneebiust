//input a matrix and display it

#include<stdio.h>
int main()
{
	int a[20][20];
	int i,j,r,c;
	
	printf("Enter the numbers of rows for your matrix ");
	scanf("%d", &r);
	printf("Enter the number of columns for you matrix ");
	scanf("%d", &c);
	
	printf("Enter the values for your matrix row-wise\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
