//number swap program
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the two numbers");
scanf("%d%d",&a,&b);
c=a;a=b;b=c;
printf("the values are %d and %d\n",a,b);
}
