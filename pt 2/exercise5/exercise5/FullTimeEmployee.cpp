

#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(string name, int id, double monthlySalary) : Employee(name, id), monthlySalary(monthlySalary){}

double FullTimeEmployee::calculateSalary() const{
	return monthlySalary;
}

void FullTimeEmployee::displayInfo() const {
	Employee::displayInfo();
	cout << "Role: FullTimeEmployee" << endl;
	cout << "Salary: " << monthlySalary << endl;
	cout << "--------------------------" << endl;
}
