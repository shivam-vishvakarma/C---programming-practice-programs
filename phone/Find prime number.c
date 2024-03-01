#include<stdio.h>
int main()
{int i,n,t;
printf("Enter any number");
scanf("%d",&n);
for(i=2;i<n;i++)
{if(n%i==0)
{t=0;break;}
else
{t=1;}
}
if(t==1)
printf("Given number is prime number");
else
printf("Given number is not a prime number");
}