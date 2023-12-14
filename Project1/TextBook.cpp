#include "TextBook.h"

TextBook::TextBook()
{
    _class = 0;
}

TextBook::TextBook(int _class, string publisher, string isbn, string name, string author, int year)
    :Book( publisher,  isbn,  name,  author,  year)
{
    this->_class = _class;
}

int TextBook::getClass() const
{
    return _class;
}

void TextBook::show() const
{
    Book::show();
    cout << "Class: " << _class << endl;
}

string TextBook::type() const
{
    return "TextBook";
}
