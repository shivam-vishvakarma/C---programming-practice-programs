#include<stdio.h>
int prime(int n)
{
    int i,t;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            t=0;
            break;
        }
        else
        {
            t=1;
        }
    }
    if(t==1)
    return 1;
    if(t==0)
    return 0;
}
int main()
{
	int a,b;
	printf("Enter a number:- ");
	scanf("%d",&a);
	b=prime(a);
	if(b==1)
	printf("Prime");
	if(b==0)
	printf("Not prime");
}