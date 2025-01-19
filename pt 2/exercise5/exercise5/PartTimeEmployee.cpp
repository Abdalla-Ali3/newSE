#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(string name, int id, int hoursWorked, double hourlyRate) : Employee(name, id), hoursWorked(hoursWorked), hourlyRate(hourlyRate){}

double PartTimeEmployee::calculateSalary() const{
	return hourlyRate * hoursWorked;
}

void PartTimeEmployee::displayInfo() const {
	Employee::displayInfo();
	cout << "Role: PartTimeEmployee" << endl;
	cout << "Salary: " << calculateSalary() << endl;
	cout << "--------------------------" << endl;
}
