#include<stdio.h>
void inputs(char * str,char s[5])
{
	printf("%s",s);
	gets(str);
}
int main()
{
	char *pa,a[5];
	pa=&a;
	inputs(pa,"Enter a string:-");
	puts(a);
}