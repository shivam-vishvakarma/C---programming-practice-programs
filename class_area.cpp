#include<iostream>
using namespace std;
class Area
{
    int area,a,b;
    public:
    Area(int a)
    {
        this->a=a;
        area = this->a * this->a ;
        cout<< "Area is : " << area << " unit ^2" << endl;
    }
    Area(int a,int b)
    {
        this->a=a;
        this->b=b;
        area = this->a * this->b ;
        cout<< "Area is : " << area << " unit ^2" << endl;
    }
};

int main()
{
    int a;
    cout<< "Enter a number : ";
    cin>> a;
    Area A(a);
    int b;
    cout<< "Enter two number : ";
    cin>> a>>b;
    Area B(a,b);
    return 0;
}