//Othman Hassan Othman Ali
//Abdalla Ali Abdalla Ali

#include <iostream>
using namespace std;

class Grandparent {
public:
    Grandparent(string org) {
        cout << "Grandparent class is created " << org << endl;
    }

    ~Grandparent() {
        cout << "Grandparent class is destroyed" << endl;
    }
};

class Parent : public Grandparent {
public:
    Parent(string org, string inh1)
        : Grandparent(inh1) {
        cout << "Parent class is created" << org << endl;
    }

    ~Parent() {
        cout << "Parent class is destroyed" << endl;
    }
};

class Child : public Parent {
public:
    Child(string org, string inh2, string inh1)
        : Parent(inh2, inh1) {
        cout << "Child class constructor is created<< org << "\" << endl;
    }

    ~Child() {
        cout << "Child class dis destroyed" << endl;
    }
};

int main() {
    cout << "Creating Child object..." << endl;
    Child obj("Child ", "Parent ", "Grandparent ");
    return 0;
}