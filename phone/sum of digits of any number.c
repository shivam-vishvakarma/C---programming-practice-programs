//program for find sum of digits of any given number
#include<stdio.h>
int main()
{int n,s=0,i;
printf("Enter any number");
scanf("%d",&n);
for(i=n;i!=0;i=i/10)
{s=s+i%10;}
printf("Some of digits is %d",s);
}