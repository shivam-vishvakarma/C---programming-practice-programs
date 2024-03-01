#include<iostream>
using namespace std;
class number
{
    public:
    void sum(int a,int b);
    void sum(float a, float b);
    void sum(string a, string b);
};
void number::sum(int a,int b)
{
    cout<< "Sum is - " << a+b << endl;
}
void number::sum(float a,float b)
{
    cout<< "Sum is - " << a+b << endl;
}
void number::sum(string a, string b)
{
    cout<< "Concatination is - " << a+b << endl;
}

int main(int argc, const char** argv)
{
    number n;
    int a,b;
    cout<< "Enter two numbers : " ;
    cin>> a>>b;
    n.sum(a,b);
    float c,d;
    cout<< "Enter two decimal numbers : ";
    cin>> c>>d;
    n.sum(c,d);
    string e,f;
    cout<< "Enter two strings : ";
    cin>> e>>f;
    n.sum(e,f);
    return 0;
}