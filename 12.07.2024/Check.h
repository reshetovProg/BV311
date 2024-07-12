#pragma once
#include <iostream>

class Check
{
private:
	std::string positions="";
	int id;
	static int count;

public:
	Check();
	void addPosition(std::string position);
	std::string getPosition();
	int getId();
};

