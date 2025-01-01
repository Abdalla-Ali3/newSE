#include <iostream>
#include <string>
using namespace std;

class Subject{
    private:
    string name;
    string code;
    double score;
    public:
    Subject():name(""), code("") , score(0.0){}
    Subject(string a,string b, double s):name(a),code(b),score(s){}

    ~Subject();
    void setcode(string a){code=a;}
    void setname(string b){name=b;}
    void setscore(double s){score=s;}


    string getName() const {return name;}
    string getCode() const {return code;}
    double getScore() const {return score;}

    void print()const{
        cout<<name<<endl;
        cout<<code<<endl;
        cout<<score<<endl;
    }
};
