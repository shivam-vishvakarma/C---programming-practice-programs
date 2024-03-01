#include <stdio.h>
int main()
{
    int a[3][3], b[3][3],c[3][3], i, j, k;
    printf("Enter first matrix elements\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;i<3;i++)
        {
            scanf("%d",&b[3][3]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;i++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Your answer is - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}