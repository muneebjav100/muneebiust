// input a string from user and display it

#include<stdio.h>
int main()
{
    char a[20];
    printf("enter your name\n");
    scanf("%s", &a);
    
    int i;
    for(i=0; a[i]!='\0'; i++)
    {
        printf("%c", a[i]);
    }
    
  //OR printf("%s",a);
    
}