#include<stdio.h>
void main()
{
    int i,j,t;
    char a[20],b[20];
    printf("Enter first string-\n");
    gets(a);
    printf("Enter second string-\n");
    gets(b);
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++);
    if(i!=j)
    {
        printf("Not equal");
    }
    else
    {
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            t=1;
        }
        else
        {
            t=0;
            break;
        }
    }
    if(t==1)
    printf("Both strings are same");
    if(t==0)
    printf("Lenth is same but characters are not equal");
    }
}