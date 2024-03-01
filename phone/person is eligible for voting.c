#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter your age\n");
scanf("%d",&a);
if(a>=18)
{printf("You are eligible for voting\n");}
else
{printf("You are not eligible for voting\n");}
getch();
}
