#include "Catalog.h"

Catalog::Catalog()
{
    catalog.insert(new Book("Kharkiv", "1234", "C++", "lev", 2012));
    catalog.insert(new Magazine(1234, "1244", "C++", "lev", 2022));
    catalog.insert(new Magazine(1234, "1212", "C++", "lev", 2023));
    catalog.insert(new TextBook(12, "lev", "12", "English" ,"lev", 2024));
    catalog.insert(new TextBook(12, "lev", "12356", "Math", "lev", 2025));
}

Catalog::~Catalog()
{
    for (auto item : catalog) {
        delete item;
    }
    catalog.clear();
}

void Catalog::add(Edition* a)
{
    catalog.insert(a);
}

void Catalog::del(string isbn)
{
    for (auto item : catalog) {
        if (item->getIsbn() == isbn)
        {
            cout << "Delete: " << item->getName() << endl;
            catalog.erase(item);
            delete item;
           
            return;
        }
    }
    cout << "Not found!" << endl;

}

void Catalog::show() const
{
    for (auto item : catalog) {
        item->show();
        cout << endl;
    }
}

const Edition* Catalog::operator[](string isbn) const
{
    for (auto item : catalog) {
        if (item->getIsbn() == isbn)
        {
            return item;
        }
    }
    return nullptr;
}
