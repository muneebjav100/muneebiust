//Fibonacci Series 1 1 2 3 5 8 13 ... n terms
#include<stdio.h>
int main()
{
    int i, n, a=1, b=1, c;
    printf("enter the number of terms ");
    scanf("%d", &n);
    
    printf("%d %d ", a, b);
    
    for(i=1; i<=n-2 ; i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf("%d ", c);
    }
}

/* OR

int main()
{
    int i, n, a=0, b=1, c=1;
    printf("enter the number of terms ");
    scanf("%d", &n);
    
    for(i=1; i<=n ; i++)
    {
        printf("%d ", c);
        c=a+b;
        a=b;
        b=c;
    }
}*/