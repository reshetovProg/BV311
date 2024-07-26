#include "Company.h"

void Company::inclomeEmployee(Employee* employee)
{
	employees.push_back(employee);
	tmDb->addLine(Timemanager(employee->getId(), true).toString());
}

void Company::outcomeEmployee(int id)
{
	int count = 0;
	for (auto emp : employees) {
		if (emp->getId() == id) {
			count++;
			break;
		}
	}
	if (count!=0) {
		employees.erase(employees.begin() + count);
		tmDb->addLine(Timemanager(id, false).toString());
	}


}
