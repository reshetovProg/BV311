#include "Product.h"

int Product::count = 0;

void Product::show() {
	std::cout <<id <<": "<< name << " | " << ((category) ? "фрукт" : "овощ") << "\t" <<
		price << " * " << weight << "кг = " << price * weight << std::endl;
}

bool Product::buy(float weight) {
	if (weight > this->weight) return false;
	this->weight -= weight;
	return true;
}

Product::Product(std::string name, float price, float weight, Category category)
{
	this->name = name;
	this->price = price;
	this->weight = weight;
	this->category = category;
	id = ++count;
}

int Product::getId()
{
	return id;
}

std::string Product::getName() {
	return name;
}
float Product::getPrice() {
	return price;
}
