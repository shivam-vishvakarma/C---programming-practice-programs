#include<iostream>
using namespace std;
class demo
{
public:
    int a,b;
    void getdata()
    {
        cout<<"Enter two numbers:";
        cin>>a>>b;
    }
    void display()
    {
        cout << "Values are:" <<endl;
        cout<<a<<" "<<b<<endl;
    }
};
demo calculate(demo a,demo b)
{
    demo c;
    c.a=a.a+b.a;
    c.b=a.b+b.b;
    return c;
}
int main() 
{
    demo x,y,z;
    x.getdata();
    y.getdata();
    z=calculate(x,y);
    z.display();
    return 0;
}