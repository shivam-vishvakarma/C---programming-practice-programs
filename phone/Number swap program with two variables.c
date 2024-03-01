#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
a=a-b,b=a+b,a=b-a;
printf("Final values are %d and%d\n",a,b);
}
