#include<iostream>
using namespace std;
class staticDemo
{
    int a,b;
    static int count;
    public:
    void getdata();
    void show();
};
void staticDemo::getdata()
{
    cout<< "Enter values of a and b : ";
    cin>>a>>b;
    count++;
}
void staticDemo::show()
{
    cout<< "Value of a is- "<< a  << endl 
        << "Value of b is- "<< b << endl
        << "Value of count is- "<< count << endl;
}
int staticDemo::count;
int main(int argc, char const *argv[])
{
    staticDemo a1;
    a1.getdata();
    a1.show();
    staticDemo a2;
    a2.getdata();
    a2.show();
    staticDemo a3;
    a3.getdata();
    a3.show();
    return 0;
}
