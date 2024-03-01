#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>51)
    {
        cout<<"Answer is: "<<(n-51)*3<<endl;
    }
    else
    {
        cout<<"Answer is: "<<51-n<<endl;
    }
    return 0;
}