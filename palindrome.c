//palindrome without using string functions

#include<stdio.h>
int main()
{
    
    char a[50];
    printf("enter the word : ");
    scanf("%s", &a);
    
    int i,count=0,flag;
    
    for(i=0; a[i]!='\0'; i++)
    {
        count++;
    }
    
    for(i=0; i<count/2; i++)
    {
        if(a[i]!=a[count-1-i])
        {
        	flag=0;
        	break;
        }
        else
        flag=1;
    }
        if(flag==1)
        printf("it's a palindrome");
        else
        printf("it's not a palindrome");
    
}