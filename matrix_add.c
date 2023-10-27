//Addition of two matrices

#include<stdio.h>
int main()
{
	int a[20][20], b[20][20];
	int m,n,i,j;
	
	printf("Enter the order of your matrices (mxn)\n");
    scanf("%d%d", &m, &n);
    printf("Enter the values of the matrix 1 row-wise\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the values of the matrix 2 row-wise\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nMatrix 1\n\n");
    for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2\n\n");
    for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
    
    printf("\nResultant Matrix\n\n");
    for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]+b[i][j]);
		}
		printf("\n");
	}
    
    
    
}
