#include<stdio.h>
int main()
{
	int i,j;
	char a[20],b[20],c[40];
	printf("Enter first string-\n");
	gets(a);
	printf("Enter second string-\n");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
	    c[i]=a[i];
	}
	c[i]=' ';
	for(j=0;b[j]!='\0';j++)
	{
	    i++;
	    c[i]=b[j];
	}
	c[i+1]='\0';
	printf("combine string is-\n");
	puts(c);
}