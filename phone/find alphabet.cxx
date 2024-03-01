#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:-");
    scanf("%c",&a);
    if(a>=65&&a<=90||a>=97&&a<=122)
    {
        printf("You entered a alphabet\n");
    }
    else
    {
        printf("You not entered a alphabet");
    }
}