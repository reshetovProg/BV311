#include <iostream>
#include <chrono>
#include "Database.h"
#include "Employee.h"
#include "Timemanager.h"
#include "Company.h"
#include <Windows.h>
using namespace std::chrono;

int main()
{
  Company company;
  Database employeeDb("resources/Employee.txt");
  for (int i = 0; i < 10; i++) {
    Employee* employee = Employee::generateEmployee();
    employeeDb.addLine(employee->toString());
    company.inclomeEmployee(employee);
    Sleep(300);
  }
  for (int i = 1; i <= 10; i++) {
    company.outcomeEmployee(i);
    Sleep(300);
  }





  //Database employeeDb("resources/Employee.txt");
  //try {
  //  /*for (int i = 0; i < 30; i++) {
  //    employeeDb.addLine(Employee::generateEmployee()->toString());
  //  }*/
  //  employeeDb.removeLine(10);
  //  employeeDb.showDoc();
  //}
  //catch (const char* ex) {
  //  cout << ex;
  //}
 
    
}
