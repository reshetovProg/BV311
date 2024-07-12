#pragma once

#include <iostream>

enum Category {
	FRUIT,
	VEGETABLE
};

class Product
{
private:
	std::string name;
	float price;
	float weight;
	int id;
	Category category;

	static int count;

public:
	Product(std::string name, float price, float weight, Category category);
	int getId();
	std::string getName();
	float getPrice();
	// ������ �����
	bool buy(float weight);
	//���� � ��������
	void show();
};



