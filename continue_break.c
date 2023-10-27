//continue and break in loops

#include<stdio.h>
int main()
{
    int i;
    
    for(i=1; i<=10; i++)
    {
        if(i==5)
        continue; //current round breaks and loop continues with next round
        
        if(i==8)
        break;  //loop breaks completely here
        
        printf("%d ", i);
        
        
    }
}