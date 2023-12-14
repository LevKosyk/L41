#pragma once
#include "Book.h"
class TextBook :
    public Book
{
protected:
    int _class;
public:
    TextBook();
    TextBook(int _class, string publisher, string isbn, string name, string author, int year);

    int getClass()const;

     void show()const;
     string type()const;
};

