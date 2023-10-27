//number of words in a text file

#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	int c=0;
	p=fopen("intro.txt", "r");
	ch=fgetc(p);
	
	while(ch!=EOF)
	{
		if(ch==' ')
		c++;
		ch=fgetc(p);
	}
	printf("Number of words = %d", c+1);
	fclose(p);
}