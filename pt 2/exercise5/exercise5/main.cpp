// ? EXERCISE 5: POLYMORPHISM

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: Othman Hassan Othman Ali   Location: KLG (i.e. where are you currently located)
// Member 2's Name: Abdalla Ali Abdalla Ali    Location: KLG

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  16.1.2025    9:00 am      10:30 am    1:08:00


// Video link:
//   https://www.youtube.com/watch?v=Md4TprDGWYI

#include "Intern.cpp"
#include "Employee.cpp"
#include "FullTimeEmployee.cpp"
#include "PartTimeEmployee.cpp"
#include "ContractEmployee.cpp"
#include <vector>

int main() {
	vector <Employee*> Employees;

	Employees.push_back(new FullTimeEmployee("Alice", 1, 5000));
	Employees.push_back(new PartTimeEmployee("Bob", 2, 500, 4));
	Employees.push_back(new Intern("Charlie", 3, 1000 ));
	Employees.push_back(new ContractEmployee("David", 4, 40000, 10));

	for(int i=0; i < Employees.size(); i++){ 
		Employees[i]->displayInfo();
	}

}
