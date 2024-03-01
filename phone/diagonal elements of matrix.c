#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter Matrix\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	printf("Your given matrix is\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        printf("%d  ",a[i][j]);
	    }
	    printf("\n");
	}
	printf("\nFirst diagonal elements are\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        if(i==j)
	        {
	        printf("%d  ",a[i][j]);
	        }
	    }
	}
	printf("\nSecond diagonal elements are\n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        if(i+j==2)
	        {
	        printf("%d  ",a[i][j]);
	        }
	    }
	}
}