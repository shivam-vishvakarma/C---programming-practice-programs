#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,min,max=0;
	printf("Enter 10 numbers:-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Max is :- %d\nMin is :- %d",max,min);
	getch();
	return 0;
}