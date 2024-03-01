#include<iostream>
using namespace std;
class dept;
class emp
{
    int id;
    string name;
    float salary;
    public:
    void friend display(emp e,dept d);
    void insert()
    {
        cout<< "Enter employee's Id, Name, Salary : ";
        cin>> id >> name >> salary ;
    }
};
class dept
{
    int id;
    string dpt_name;
    public:
    void friend display(emp e,dept d);
    void insert()
    {
        cout<< "Enter Department Id and Department Name : ";
        cin>> id >> dpt_name ;
    }
    
};
void display(emp e,dept d)
{
    cout<< "Details are - " << endl;
    cout<< "Employee Id is - " << e.id << endl 
        << "Employee Name is - " << e.name << endl
        << "Employee salary is - " << e.salary << endl
        << "Department Id is - " << d.id << endl
        << "Department Name is - " << d.dpt_name << endl;
}

int main()
{
    emp e1;
    dept d1;
    e1.insert();
    d1.insert();
    display(e1,d1);
    return 0;
}
