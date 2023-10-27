//display transpose of a matrix

#include<stdio.h>
int main()
{
    int a[20][20];
    int i,j,m,n;
    
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
    
    printf("\nInput Matrix\n\n");
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
