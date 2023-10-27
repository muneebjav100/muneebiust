//display contents of a character array

#include<stdio.h>
int main()
{
    char a[6] = {'a', 'u', 'q', 'i', 'b','\0'};
    // OR char a[6] = "auqib";
    
    int i;
    for(i=0; i<6; i++) //OR (i=0; a[i]!='\0'; i++)
    {
        printf("%c", a[i]);
    }
}