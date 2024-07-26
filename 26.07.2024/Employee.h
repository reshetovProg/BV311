#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define random(a,b) a+rand()%(b+1-a)

class Employee {
private:
	int id;
	string name;
	string surname;
	static int countId;
	static vector<string> names;
	static vector<string> surnames;
public:
	Employee(string name, string surname);
	int getId();
	string toString();
	void show();
	static Employee* generateEmployee();
};