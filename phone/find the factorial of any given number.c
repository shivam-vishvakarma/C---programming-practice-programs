#include<stdio.h>
int main()
{int n,i,f=1;
printf("Enter any number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{f=f*i;}
printf("Answer is %d",f);
}