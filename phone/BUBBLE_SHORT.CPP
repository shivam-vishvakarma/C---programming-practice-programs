#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,t=0;
	printf("Enter 10 numbers:-");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Sorted array is:-\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}