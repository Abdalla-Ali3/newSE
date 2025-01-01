#include "book.h"
#include <iostream>
#include <string>
using namespace std;

    void book::setName(string Name){ name = Name;}
    void book::setAuthor(string Author){author = Author;}
    void book::setPages(int page){pages = page;}

    string book :: getName()const{return name;};
    string book :: getAuthor()const{return author;};
    int book :: getPage()const{return pages;}

    void book :: printInfo(){
        cout << "the book is "<<getName() <<" and the author is ";
    
    }