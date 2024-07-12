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
	//������ �������
	void startBuy();
	//��������� �������
	void endBuy();
	//������ ������� �� id
	void buyProductById(int id, int weight);
	// ���������� �������� � �������
	void addProduct(Product* product);
	// ������� ��� ��������
	void showProducts();
};

