#include<iostream>
using namespace std;
class arr
{
    string name;
    float salary;
    public:
    void getdata()
    {
        cout<< "Enter Name and Salary: ";
        cin>> name >> salary;
    }
    void show()
    {
        cout<< "Details are-" << endl
            << "Name is - " << name << endl
            << "Salary is - " << salary << endl;
    }
};
int main(int argc, char const *argv[])
{
    arr a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i].getdata();
        a[i].show();
    }
    return 0;
}
