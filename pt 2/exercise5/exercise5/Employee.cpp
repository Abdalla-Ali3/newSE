#include "Employee.hpp"

using namespace std;

Employee::Employee(const string& name, int id) : name(name), id(id){}
void Employee::displayInfo() const {
	cout << "Employee ID: " << id << endl;
	cout << "Name: " << name << endl;
	
}
Employee::~Employee() {}