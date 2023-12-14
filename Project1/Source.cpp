#include"Book.h"
#include"TextBook.h"
#include"Magazine.h"
#include"Catalog.h"
int main() {
	Catalog cat;
	cat.show();
	cout << "-------------------------------------\n";
	cat.del("1234");
	cat.show();
	cout << "-------------------------------------\n";
	auto item = cat["12"];
	if (item != nullptr)
	{
		item->show();
	}
}