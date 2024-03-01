#include<stdio.h>
int main()
{
	int i,j,k,a=5;
	for(i=a;i>=1;i--)
	{
	    for(k=a;k>i;k--)
	    {
	        printf(" ");
	    }
	    for(j=1;j<=i;j++)
	    {
	        printf(" *");
	    }
	    printf("\n");
	}
	return 0;
}