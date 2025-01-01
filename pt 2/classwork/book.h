#ifndef book_h
#define book_h
#include <iostream>
#include <string.h>
using namespace std;

class book{
    private:

    string name;
    string author;
    int pages;

    public:

    void setName(string);
    void setAuthor(string);
    void setPages(int);
    
    string getName()const;
    string getAuthor()const;
    int getPage()const;
    void printInfo();
};

#endif