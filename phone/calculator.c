#include<stdio.h>
int main()
{
int a,b,x;
printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\n");
scanf("%d",&x);
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
switch(x)
{
case 1:printf("Answer is %d\n",a+b);break;
case 2:printf("Answer is %d\n",a-b);break;
case 3:printf("Answer is %d\n",a*b);break;
case 4:printf("Answer is %d\n",a/b);break;
default :printf("Wrong choice\n");
}//switch close
}//main close
