#include "ContractEmployee.h"

ContractEmployee ::ContractEmployee (string name, int id, double contractFee, int durationInMonths) : Employee(name, id), contractFee(contractFee), durationInMonths(durationInMonths){}

double ContractEmployee ::calculateSalary() const{
	return contractFee/durationInMonths;
}

void ContractEmployee ::displayInfo() const {
	Employee::displayInfo();
	cout << "Role: ContractEmployee " << endl;
	cout << "Salary: " << calculateSalary() << endl;
	cout << "--------------------------" << endl;
}
