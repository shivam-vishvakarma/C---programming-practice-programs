#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three values");
scanf("%d%d%d",&a,&b,&c);
printf("%d is greater then %d answer is %d\n",a,b,a>b);
printf("%d is lower then %d answer is %d\n",a,b,a<b);
printf("%d is greater then 4 answer is %d\n",a,a>4);
printf("%d is greater then or equal to %d answer is %d\n",a,c,a>=c);
printf("%d is greter then other values answer is %d\n",c,c>a&&c>b);
printf("%d is greter then anyone of these values answer is %d\n",b,b>a||b>c);
printf("%d is greter then other values answer is %d",c,!c>b&&c>a);
}
