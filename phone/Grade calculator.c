#include<stdio.h>
int main()
{
int a;
printf("Enter your percentage\n");
scanf("%d",&a);
if(a>=40&&a<=60)
printf("Your grade is C\n");
if(a>60&&a<=80)
printf("Your grade is B\n");
if(a>80&&a<=100)
printf("Your grade is A\n");
}
