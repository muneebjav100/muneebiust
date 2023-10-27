// sum of elements of an int array

#include<stdio.h>
int main()
{
    int a[100];
    int i, n, sum=0;
    printf("enter the length of the array ");
    scanf("%d",&n);
    printf("enter values of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Entered array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum = %d", sum);
}