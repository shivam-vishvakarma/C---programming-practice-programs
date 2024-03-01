#include<stdio.h>
int main()
{
    int a,n,r2000,r500,r200,r100,r50,r20,r10,r5,r2,r1,s1,s2;
    printf("Enter your ammount:");
    scanf("%d",&a);
    n=a;
    r2000=n/2000;n=n-r2000 *2000;
    r500=n/500;n=n-r500*500;
    r200=n/200;n=n-r200*200;
    r100=n/100;n=n-r100*100;
    r50=n/50;n=n-r50*50;
    r20=n/20;n=n-r20*20;
    r10=n/10;n=n-r10*10;
    r5=n/5;n=n-r5*5;
    r2=n/2;n=n-r2*2;
    r1=n;
    s1=r2000+r500+r200+r100+r50+r20+r10;
    s2=r5+r2+r1;
    printf("%d * 2000\n",r2000);
    printf("%d * 500\n",r500);
    printf("%d * 200\n",r200);
    printf("%d * 100\n",r100);
    printf("%d * 50\n",r50);
    printf("%d * 20\n",r20);
    printf("%d * 10\n",r10);
    printf("%d * 5\n",r5);
    printf("%d * 2\n",r2);
    printf("%d * 1\n",r1);
    printf("%d has %d notes and %d coins",a,s1,s2);
}
