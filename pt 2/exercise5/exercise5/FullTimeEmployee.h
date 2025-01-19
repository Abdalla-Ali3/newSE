#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.hpp"

class FullTimeEmployee : public Employee {

	protected:
		double monthlySalary;
		

	public:
		FullTimeEmployee(string name, int id, double monthlySalary);
		double calculateSalary() const;
		void displayInfo() const;
};

#endif