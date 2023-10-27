//Find transpose of a matrix

#include<stdio.h>
int main()
{
	int a[20][20], b[20][20];
	int m,n,i,j;
	
	printf("Enter the order of your matrix (mxn)\n");
    scanf("%d%d", &m, &n);
    printf("Enter the values of the matrix entries row-wise\n");
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    
    printf("\nInitial Matrix\n\n");
    for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    
    printf("\nTranspose\n\n");
    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
