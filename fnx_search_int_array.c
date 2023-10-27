//searching an int array for an element entered by the user using fnxs

#include<stdio.h>

int search(int[], int, int);

int main()
{
	int a[]={1,2,3,4,5}, x, n=5, flag;
	printf("Enter the element you are searching for ");
	scanf("%d", &x);
	
	flag=search(a, x, n);
	
	if(flag==1)
	printf("Found");
	else
	printf("Not found");
		
}

int search(int a[], int x, int n)
{
	int i, flag=0;
	
	for(i=0; i<n; i++)
	{
		if(x==a[i])
		{
			flag=1;
			break;
		}
	}
	return flag;
}