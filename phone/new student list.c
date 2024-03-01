#include<stdio.h>
struct student
{
	char name[20];
	int fundamental;
	int c;
	int management;
	int communication;
	int math;
	int total;
	long mnumber;
};
typedef struct student std;
int main()
{
	int i,n;
	printf("Enter number of total students:-");
	scanf("%d",&n);
	std s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d student name:-",i+1);
		scanf("%s",s[i].name);
		printf("Enter %d student fundamental number:-\n",i+1);
		scanf("%d",&s[i].fundamental);
		printf("Enter %d student c programming number:-\n",i+1);
		scanf("%d",&s[i].c);
		printf("Enter %d student management number:-\n",i+1);
		scanf("%d",&s[i].management);
		printf("Enter %d student communication number:-\n",i+1);
		scanf("%d",&s[i].communication);
		printf("Enter %d student math number:-\n",i+1);
		scanf("%d",&s[i].math);
		printf("Enter %d student mobil number:-\n",i+1);
		scanf("%ld",&s[i].mnumber);
		s[i].total=s[i].fundamental+s[i].c+s[i].management+s[i].communication+s[i].math;
	}
	for(i=0;i<=82;i++)
	{
		printf("_");
	}
	printf("\n");
	printf("|%5s|%15s|%5s|%5s|%10s|%13s|%5s|%5s|%10s|\n","R No.","Name","CF","C","MANAGEMENT","COMMUNICATION","MATH","Total","MOBILE NO.");
	for(i=0;i<=82;i++)
	{
		printf("_");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	    printf("|%5d|%15s|%5d|%5d|%10d|%13d|%5d|%5d|%10ld|\n",i+1,s[i].name,s[i].fundamental,s[i].c,s[i].management,s[i].communication,s[i].math,s[i].total,s[i].mnumber);
	}
	for(i=0;i<=82;i++)
	{
		printf("_");
	}
}