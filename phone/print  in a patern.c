#include<stdio.h>
int main()
{
   int a,b,i,j;
   printf("Enter the number of rows:");
   scanf("%d",&a);
 printf("Enter the value of colomns:");
 scanf("%d",&b);
   for( i=a;i!=0;i--)
   {
       for( j=b;j!=0;j--)
        {
            printf(" * ");
        }
        printf("\n");
   }
}