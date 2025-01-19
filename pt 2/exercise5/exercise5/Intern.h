#ifndef INTERN_H
#define INTERN_H

#include "Employee.hpp"

class Intern : public Employee {

	protected:
		double stipend;
		

	public:
		Intern(string name, int id, double stipend);
		double calculateSalary() const;
		void displayInfo() const;
};

#endif