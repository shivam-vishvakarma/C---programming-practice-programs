#include<stdio.h>
int main()
{int a,b,i,gcd=1;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
for(i=1;i<a+b;i++)
{if(a%i==0&&b%i==0)
{gcd=i;}
}
printf("GCD of given nunbers is %d",gcd);
}