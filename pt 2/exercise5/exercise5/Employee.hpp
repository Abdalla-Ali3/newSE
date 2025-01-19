#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(const string& name, int id);
    virtual ~Employee(); // Virtual destructor
    virtual double calculateSalary() const = 0; // Pure virtual function
    virtual void displayInfo() const; // Virtual function
};
#endif
