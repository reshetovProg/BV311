#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Database.h"
#include "Timemanager.h"

class Company
{
	vector<Employee*> employees;
	Database* tmDb = new Database("resources/Timemanager.txt");
public:
	void inclomeEmployee(Employee* employee);
	void outcomeEmployee(int id);

};

