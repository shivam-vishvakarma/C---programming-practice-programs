#include <iostream>
using namespace std;
class BOOK
{
    int id;
    string b_name, author;
    float price;

public:
    BOOK(string book_name, string author_name);
    BOOK(int ID, string book_name, string author_name, float price);
    BOOK(BOOK &a);
    BOOK() {}
    void display();
};

BOOK::BOOK(string book_name, string author_name)
{
    b_name=book_name;
    author=author_name;
}
BOOK::BOOK(int ID, string book_name, string author_name, float price)
{
    id=ID;
    b_name=book_name;
    author=author_name;
    this->price=price;
}
BOOK::BOOK(BOOK &a)
{
    id = a.id;
    b_name = a.b_name;
    author = a.author;
    price = a.price;
}
void BOOK::display()
{
    cout<< "Details are - " << endl;
    cout<< "Book ID is - " << id << endl
        << "Book Name is - " << b_name <<endl
        << "Book Author is - " << author <<endl
        << "Book Price is - " << price << endl;
}

int main()
{
    int id;
    string b_name,author;
    float price;
    cout<<"Enter Book name and author name - ";
    cin>>b_name>>author;
    BOOK b1(b_name,author);
    cout<<"Enter Book ID, Book Name, Author Name, Price - ";
    cin>>id>>b_name>>author>>price;
    BOOK b2(id,b_name,author,price);
    BOOK b3(b1);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}