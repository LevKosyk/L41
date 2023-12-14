#include "Book.h"

Book::Book()
{
    publisher = "0";
}

Book::Book(string publisher, string isbn, string name, string author, int year)
:Edition(isbn, name, author, year)
{
    this->publisher = publisher;
}

Book::~Book()
{
}

string Book::getPublisher() const
{
    return publisher;
}

void Book::show() const
{
    cout << "ISBN: " << isbn << endl;
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Publisher: " << publisher << endl;

}

string Book::type() const
{
    return "Book";
}
