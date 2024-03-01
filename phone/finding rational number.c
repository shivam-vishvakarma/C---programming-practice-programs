#include<stdio.h>
#include<Find prime number.cxx>
int main()
{
    int a,b,i,n;
    printf("Enter numerator\n");
    scanf("%d",&a);
    printf("Enter denominator\n");
    scanf("%d",&b);
    for(n=1;n<20;n++)
    {
        if(n==1)
        {
            for(i=2;i<20;i++)
            {
                if(a%i==0&&b%i==0)
                {
                    a=a/i;
                    b=b/i;
                    break;
                }
            }
        }
        else
        {break;}
    }
    printf("Answer is %d %d\n",a,b);
}