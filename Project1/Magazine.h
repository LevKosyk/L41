#pragma once
#include "Edition.h"
class Magazine :
    public Edition
{
protected:
    int num;
public:
    Magazine();
    Magazine(int num, string isbn, string name, string author, int year);

    int getNum()const;

    virtual void show()const;
    virtual string type()const;
};

