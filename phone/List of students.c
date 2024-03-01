#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter number of total students:");
	scanf("%d",&n);
	int M[n],S[n],E[n];
    long int mn[n];
	char N[n][10];
	for(i=1;i<=n;i++)
	{
	    printf("Enter %d student name:",i);
	    scanf("%s",N[i]);
	    printf("Enter marks in Maths of %d student:",i);
	    scanf("%d",&M[i]);
	    printf("Enter marks in Science of %d student:",i);
	    scanf("%d",&S[i]);
	    printf("Enter marks in English of %d student:",i);
	    scanf("%d",&E[i]);
	    printf("Enter the Mobile No. of %d student:",i);
	    scanf("%ld",&mn[i]);
	}
	printf("_______________________________________________________\n");
	printf("|Rolle no. |Name |Maths |Science |English |Mobile No. |\n");
	printf("_______________________________________________________\n");
	for(i=1;i<=n;i++)
	{
	    printf("|%d.\t|%s\t|%d\t|%d\t|%d\t|%ld    |\n",i,N[i],M[i],S[i],E[i],mn[i]);
	}
	printf("_______________________________________________________\n");
}