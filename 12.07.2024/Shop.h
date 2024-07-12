#pragma once
#include "Product.h"
#include "Check.h"
#include <iostream>
#include <string>
class Shop
{
private:
	Product** products = nullptr;
	int countProducts = 0;
	Check* check = nullptr;
public:
	//начать покупку
	void startBuy();
	//завершить покупку
	void endBuy();
	//купить продукт по id
	void buyProductById(int id, int weight);
	// добавление продукта в магазин
	void addProduct(Product* product);
	// вывести все продукты
	void showProducts();
};

