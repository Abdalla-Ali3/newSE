//? EXERCISE 4: ASSOCIATION

// Programming Technique II
// Semester 2, 2021/2022

// Section: 02
// Member 1's Name: Othman Hassan Othman Ali  Location: KLG
// Member 2's Name: Abdalla Ali Abdalla Ali    Location: KLG

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  17-12-2024    4:00          5:30          1:06 hours

// Video link:
// https://www.youtube.com/watch?v=miTjGqE_TyE


#include <iostream>
#include <cmath>
using namespace std;

class Term
{
private:
    int coef;
    int exp;

public:
    Term(int c = 0, int e = 0);
    void set(int c, int e);
    int evaluate(int x) const;
    int exponent() const;
    int coefficient() const;
};

class Polynomial
{
private:
    Term *Terms;
    int size;
public:
    Polynomial(int S) {
        size = S;
        Terms = new Term[S];
    }
    void input();
    int evaluate(int x) const;
    Term largestTerm() const;
    int degree() const;
};

//----------------------------------------------------------------------------
int main()
{
    int size;
    cout << "Enter a polynomial: " << endl;
    cout << "How many terms? => ";
    cin >> size;
    Polynomial A(size);

    A.input();
    cout << endl;

    cout << " x  \t\tPolynomial value" << endl;
    cout << "----\t\t----------------" << endl;

    for (int x = 0; x <= 5; x++)
        cout << x << "  \t\t"<< A.evaluate(x) << endl;

    cout << endl;

    cout << "\nDegree of polynomial =>  " << A.degree();

    system("pause");
    return 0;
}

//----------------------------------------------------------------------------
// class Term

// The constructor is given

Term::Term(int c, int e) : coef(c), exp(e) {}

// Implement the other methods
void Term::set(int c, int e) {
    coef = c;
    exp = e;
}
int Term::exponent() const {
    return (exp);
}
int Term::coefficient() const {
    return (coef);
}
int Term::evaluate(int x) const {
    return (((int)pow(x,exp)) * coef);
}
//----------------------------------------------------------------------------

// class Polynomial


void Polynomial::input() {
    int c, e;
    
    for (int i = 0; i < size; i++ ) {
        cout << "Enter term #" << i + 1 << " (coef and exp) => ";
        cin >> c >> e;
        Terms[i].set(c, e);
    }
}
// Implement the constructor and the other methods of the class Polynomial

int Polynomial::evaluate(int x) const {
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += Terms[i].evaluate(x);
    }
    return sum;
}

int Polynomial::degree() const {
    int degree = Terms[0].exponent();
    for (int i = 1; i < size; i++)
    {
        if (Terms[i].exponent() > degree)
            degree = Terms[i].exponent();
    }
    return degree;
}
