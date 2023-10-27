//display contents of an integer array

#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    // OR int a[] = {1, 2, 3, 4, 5};
    
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}