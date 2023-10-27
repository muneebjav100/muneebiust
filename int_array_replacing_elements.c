//replacing elements of an int array

#include<stdio.h>
int main()
{
    int a[50], b[50], c[50];
    int i,j,n,m;
    
    printf("Enter the length of the array ");
    scanf("%d", &n);
    
    printf("Enter the values of the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("\nInitial array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    
   printf("\n\nEnter the number of unique elements you want to replace in the above array ");
   scanf("%d", &m);
   printf("Enter the values of the elements you want to replace in the above array\n");
   for(i=0; i<m; i++)
   {
        scanf("%d", &b[i]);
   }
   
    printf("Enter the value you want to replace the above elements with, respectively\n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &c[i]);
    }
    
        
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==b[j])
            {
                a[i]=c[j];
            }
        }
    }
    
    printf("\nFinal array : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
}