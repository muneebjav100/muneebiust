// Bubble Sort : int array (ascending order)

#include<stdio.h>
int main()
{
    int a[50];
    int i,j,n,x;
    
    printf("Enter the length of array ");
    scanf("%d", &n);
    printf("Enter the values of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    printf("\nSorted array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}