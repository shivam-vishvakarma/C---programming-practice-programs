#include<iostream>
using namespace std;
class demo
{
    int id, marks;
    string name;
    public:
    void getdata()
    {
        cout<< "Enter Id, Name, Marks:";
        cin>>id>>name>>marks;
    }
    void printdata()
    {
        cout<< "Details are-" << endl
            << "Id is - " << id << endl
            << "Name is - " << name << endl
            << "Marks are - " << marks << endl;
    }
};
int main()
{
    demo d1,d2;
    d1.getdata();
    d1.printdata();
    d2.getdata();
    d2.printdata();
    return 0;
}
