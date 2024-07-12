#include "Check.h"

int Check::count = 0;

Check::Check()
{
	id = ++count;
}

void Check::addPosition(std::string position)
{
	positions += position + "\n";
}

std::string Check::getPosition()
{
	return positions;
}

int Check::getId()
{
	return id;
}
