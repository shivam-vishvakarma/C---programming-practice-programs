#include<stdio.h>
int main()
{
int a;
printf("Enter a year\n");
scanf("%d",&a);
switch(a%4==0)
{
case 1:printf("Year is leap year\n");break;
case 0:printf("year is not a leap year\n");
}
}
