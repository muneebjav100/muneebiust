//Files : permanent storage of data.
//read content of a text file

#include<stdio.h>
int main()
{
	FILE *p;
	char ch;
	p=fopen("intro.txt", "r");	//r->read mode
	ch=fgetc(p);	//or getc
	
	while(ch!=EOF)	//or ch!=NULL
	{
		printf("%c", ch);
		ch=fgetc(p);
	}
	fclose(p);
}