#include "Intern.h"

Intern::Intern(string name, int id, double stipend) : Employee(name, id), stipend(stipend){}

double Intern::calculateSalary() const{
	return stipend;
}

void Intern::displayInfo() const {
	Employee::displayInfo();
	cout << "Role: Intern" << endl;
	cout << "Salary: " << calculateSalary() << endl;
	cout << "--------------------------" << endl;
}
