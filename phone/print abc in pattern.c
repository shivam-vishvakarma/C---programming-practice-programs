#include<stdio.h>
int main()
{
    int i,j,c=97;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf(" %c ",c);
            c++;
        }
        printf("\n");
    }
}