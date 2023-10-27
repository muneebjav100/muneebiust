// imput an int array from user and display the same

#include<stdio.h>
int main()
{
    int a[10];
    int i,n;
    printf("enter the length of the array ");
    scanf("%d",&n);
    printf("enter values of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}