#include "Timemanager.h"

int Timemanager::countId = 1;

Timemanager::Timemanager(int idEmployee, bool status)
{
	id = countId++;
	this->idEmployee = idEmployee;
	this->status = status;

	time_t now = time(0);
	tm* localtm = localtime(&now);
	this->localDateTime = asctime(localtm);
	localDateTime.erase(localDateTime.end()-1);
}

string Timemanager::toString()
{
	return to_string(id) + ";" + to_string(idEmployee) + ";" + localDateTime + ";" + to_string(status);
}
