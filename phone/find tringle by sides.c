#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        if(b+c>a)
        {
            printf("Tringle is valid");
        }
        else
        {
            printf("Tringle is not valid");
        }
    }
    else if(b>a&&b>c)
    {
        if(a+c>b)
        {
            printf("Tringle is valid");
        }
        else
        {
            printf("Tringle is not valid");
        }
    }
    else if(c>a&&c>b)
    {
        if(a+b>c)
        {
            printf("Tringle is valid");
        }
        else
        {
            printf("Tringle is not valid");
        }
    }
}