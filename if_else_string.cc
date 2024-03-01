#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    if(s.at(0)=='i'&&s.at(1)=='f')
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<"if "+s<<endl;
    }
    return 0;
}