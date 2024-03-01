#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    if(a==b)
    {
        c=(a+b)*3;
    }
    else
    {
        c=a+b;
    }
    cout<<"Answer is: "<<c<<endl;
    return 0;
}