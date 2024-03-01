#include<stdio.h>
int main()
{float tr,adv,md,mp,a,ab;
printf("Enter the total run");
scanf("%f",&tr);
printf("Enter the advance");
scanf("%f",&adv);
printf("Enter the monthly payment");
scanf("%f",&mp);
printf("Enter the days of the month");
scanf("%f",&md);
printf("Enter the total absence");
scanf("%f",&ab);
a=mp-mp/md*ab+tr*5.5-adv;
printf("Your monthly payment is %f",a);
}
