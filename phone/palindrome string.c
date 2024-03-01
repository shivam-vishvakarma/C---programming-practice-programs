#include<stdio.h>
void main()
{
    int i,j,t;
    char a[20];
    printf("Enter a string-\n");
    gets(a);
    for(i=0;a[i]!=0;i++);
    for(i=i-1,j=0;j<i;i--,j++)
    {
        if(a[i]==a[j])
        {t=1;}
        else
        {t=0;break;}
    }
    if(t==1)
    printf("Palendrome");
    if(t==0)
    printf("Not Palendrom");
}