#include<stdio.h>
int main()
{
	int a;
	printf("Enter a character:");
	scanf("%c",&a);
	if(65<=a&&a<=90)
	printf("Given character is uppercase");
	else
	printf("Given character is lowercase");
}