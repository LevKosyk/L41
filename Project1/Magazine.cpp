#include "Magazine.h"

Magazine::Magazine()
{
    num = 0;
}

int Magazine::getNum() const
{
    return num;
}

void Magazine::show() const
{
    cout << "ISBN: " << isbn << endl;
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Num: " << num << endl;
}

string Magazine::type() const
{
    return "Magazine";
}

Magazine::Magazine(int num, string isbn, string name, string author, int year)
    :Edition(isbn, name, author, year)
{
    this->num = num;
}
