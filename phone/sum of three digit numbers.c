#include<stdio.h>
int main()
{
int n,a,b,c,s;
printf("Enter a three digit number");
scanf("%d",&n);
a=n%10;n=n/10;b=n%10;n=n/10;c=n%10;
s=a+b+c;
printf("The sum of given three digit number is %d\n",s);
}

