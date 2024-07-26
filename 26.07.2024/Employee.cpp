#include "Employee.h"

int Employee::countId=1;
vector<string> Employee::names{"Vasia", "Oleg", "Tom", "Pol"};
vector<string> Employee::surnames{"Gavrilov", "Samian", "Reshetov", "Ivanov"};

Employee::Employee(string name, string surname)
{
	this->name = name;
	this->surname = surname;
	this->id = countId++;
}

string Employee::toString()
{
	return to_string(id)+";"+name+";"+surname;
}

int Employee::getId()
{
	return id;
}

Employee* Employee::generateEmployee() {
	Employee* employee = new Employee(names[random(0, names.size() - 1)],
		surnames[random(0, surnames.size() - 1)]);
	return employee;
}
