#include<stdio.h>
int main()
{
	int n;
	printf("Enter day number:");
	scanf("%d",&n);
	switch(n)
	{
	    case 1:printf("Your day is Monday");break;
	    case 2:printf("Your day is Tuseday");break;
	    case 3:printf("Your day is Wednesday");break;
	    case 4:printf("Your day is Thursday");break;
	    case 5:printf("Your day is Friday");break;
	     case 6:printf("Your day is Saturday");break;
	     case 7:printf("Your day is Sunday");break;
	     default:printf("Invalid entery");
	}
}