#pragma once
#include<set>
#include<algorithm>
#include"TextBook.h"
#include"Magazine.h"
struct CmpEdition
{
	bool operator()(const Edition* left, const Edition* right)const {
		return atoi(left->getIsbn().c_str()) < atoi(right->getIsbn().c_str());
	}
};
class Catalog
{
protected:
	set<Edition*, CmpEdition> catalog;
public:
	Catalog();
	~Catalog();
	void add(Edition* a);
	void del(string isbn);
	void show()const;
	const Edition* operator[](string isbn)const;

};

