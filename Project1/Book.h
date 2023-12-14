#pragma once
#include "Edition.h"
class Book :
    public Edition
{
protected:
    string publisher;
public:
    Book();
    Book(string publisher, string isbn, string name, string author, int year);
    ~Book();

    string getPublisher()const;

     void show()const;
     string type()const;
};

