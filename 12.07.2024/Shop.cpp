#include "Shop.h"


void Shop::addProduct(Product* product)
{
	Product** buf = new Product * [countProducts + 1];
	for (int i = 0; i < countProducts; i++) {
		buf[i] = products[i];
	}
	buf[countProducts++] = product;
	delete[]products;
	products = buf;
}

void Shop::startBuy()
{
	check = new Check();
}

void Shop::endBuy()
{
	std::cout << "чек №" << check->getId() << std::endl;
	std::cout << check->getPosition();
}

void Shop::buyProductById(int id, int weight)
{
	int index = -1;
	for (int i = 0; i < countProducts; i++) {
		if (products[i]->getId() == id) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		std::cout << "продукт не найден" << std::endl;
		return;
	}
	if (!(products[index]->buy(weight))) {
		std::cout<<"не хватает продукта в магазине" << std::endl;
		return;
	}
	std::string positionInCheck="";
	positionInCheck += products[index]->getId() + " : ";
	positionInCheck += products[index]->getName() + "\t";
	positionInCheck += std::to_string(weight) + " * ";
	positionInCheck += std::to_string(products[index]->getPrice()) + " = ";
	positionInCheck += std::to_string(weight * products[index]->getPrice());
	check->addPosition(positionInCheck);

}

void Shop::showProducts()
{
	for (int i = 0; i < countProducts; i++) {
		products[i]->show();
	}
}
