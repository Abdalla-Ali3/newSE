#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "Employee.hpp"

class PartTimeEmployee : public Employee {

	protected:
		int hoursWorked;
		double hourlyRate;
		

	public:
		PartTimeEmployee(string name, int id, int hoursWorked, double hourlyRate);
		double calculateSalary() const;
		void displayInfo() const;
};

#endif