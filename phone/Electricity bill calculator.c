#include<stdio.h>
int main()
{
int u;float a;
printf("Enter your consumed unit\n");
scanf("%d",&u);
if(u<=100)
{
printf("Your payable ammount is 500 rupees\n");
}
else if(u>100&&u<=300)
{
a=500+(u-100)*6;
printf("Your payable ammount is %f rupees\n",a);
}
else if(u>300&&u<=500)
{
a=1700+(u-300)*7;
printf("Your payable ammount is %f rupees\n",a);
}
else if(u>500)
{
a=3100+(u-500)*8;
printf("Your payable ammount is %f rupees\n",a);
}
}//main close
