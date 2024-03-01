#include<stdio.h>
void main()
{
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    if(n<=7)
    {
        if(n==2)
        {printf("Given month have 28 or 29 days");
        }
        else
        {
        switch(n%2==0)
        {
            case 0:printf("Given month have 31 days");break;
            case 1:printf("Given month have 30 days");break;
        }
        }
    }
    else if(n<13)
    {
        switch(n%2==0)
        {
            case 0:printf("Given month have 30 days");break;
            case 1:printf("Given month have 31 days");break;
        }
    }
    else
    printf("Invalid entery");
}