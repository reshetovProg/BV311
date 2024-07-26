#pragma once
#include <iostream>
#include <string>
using namespace std;

class Timemanager
{
private:
	int id;
	int idEmployee;
	string localDateTime;
	bool status;
	static int countId;
public:
	Timemanager(int idEmployee, bool status);
	string toString();

};

