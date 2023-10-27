// insertion sort

#include<stdio.h>
int main()
{
	int a[]={4,3,6,2,5,1};
	int i, j, t, x;
	
	printf("Initial array : ");
	for(i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	
	for(i=1; i<6; i++)
	{
		t=a[i];
		for(j=i-1; j>=0; j--)
		{
			if(t<a[j])
			{
				a[j+1]=a[j];
				x=j;
			}
			else
			{
				x=j+1;
				break;
			}
		}
		a[x]=t;
	}
	printf("\nSorted array : ");
	for(i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	
}