#ifndef CONTRACTEMPLOYEE_H
#define CONTRACTEMPLOYEE_H

#include "Employee.hpp"

class ContractEmployee  : public Employee {

	protected:
		double contractFee;
		int durationInMonths;
		

	public:
		ContractEmployee (string name, int id, double contractFee, int durationInMonths);
		double calculateSalary() const;
		void displayInfo() const;
};
#endif