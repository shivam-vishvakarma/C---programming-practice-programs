//program for finding reverse of any given number
#include<stdio.h>
int main()
{int i,n,r=0,a;
printf("Enter any number\n");
scanf("%d",&n);
for(i=n;i!=0;i=i/10)
{r=r*10+i%10;}
printf("Reverse is %d",r);
}