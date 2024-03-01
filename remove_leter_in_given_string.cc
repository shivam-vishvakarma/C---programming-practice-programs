#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int n;
    cout << "Enter string" <<endl;
    cin>>s1>>n;
    s2=s1.erase(n-1,1);
    // for (int i = 0; i <= s1.length(); i++)
    // {
    //     if(n<i)
    //     {
    //         s2.at(i)=s1.at(i);
    //     }
    //     if(n>i)
    //     {
    //         s2.at(i-1)=s1.at(i);
    //     }    
    // }
    cout<<s2;
    cout<<endl;
    return 0;
}
