#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class book{
    private:
    string title;
    string code;
    double score;

    public: 
    book(string = "" , string = "", double = 0.00);
    book(string a, string b, double sc){
       title = a;
       code = b;
       score = sc;
    }
    void setTitle(string TITLE){
        title = TITLE;
    }
    void setCODE(string CODE){
        code = CODE;
    }
    void setscore(double SCORE){
        score = SCORE;
    }

    string gettitle(){
        return title;
    }
    string getcode(){
        return code;
    }
    double getscore(){
        return score;
    }
    string getgrade(){
        string grade;
        if(score>=90)
        return grade ="A+";
        if(score < 90 && score >= 80)
        return grade ="A";
        if(score < 80 && score >= 75)
        return grade ="A-";
        if(score < 75 && score >= 70)
        return grade ="B+";
        if(score < 70 && score >= 65)
        return grade ="B";
        if(score < 65 && score >= 60)
        return grade ="B-";
        if(score < 60 && score >= 55)
        return grade ="C+";
        if(score < 55 && score >= 50)
        return grade ="C";
        if(score < 50 && score >= 45)
        return grade ="C-";
        if(score < 45 && score >= 40)
        return grade ="D+";
        if(score < 40 && score >= 35)
        return grade ="D";
        if(score < 35 && score >= 30)
        return grade ="D-";
        else
        return grade="E";
    }
    double getpointval(){
        if(score>=90)
            return 4;
        if(score < 90 && score >= 80)
            return 4;
        if(score < 80 && score >= 75)
            return 3.67;
        if(score < 75 && score >= 70)
            return 3.33;
        if(score < 70 && score >= 65)
            return 3.00;
        if(score < 65 && score >= 60)
            return 2.67;
        if(score < 60 && score >= 55)
            return 2.33;
        if(score < 55 && score >= 50)
            return 2.00;
        if(score < 50 && score >= 45)
            return 1.67;
        if(score < 45 && score >= 40)
            return 1.33;
        if(score < 40 && score >= 35)
            return 1.00;
        if(score < 35 && score >= 30)
            return 0.67;
        else
            return 0.00;
    }
    double calcpoint(){
        return ((code.back()-'0') * getpointval());
    }
};
int main(){
    string name,code;
    double score;
   cout << "sb name: ";
   getline(cin,name);
   cout << "sb code: ";
   cin >> code;
   cout << "sb sore: ";
   cin >> score ;
   book Book(name ,code ,score);
   cout<<"result"<<endl;
   cout<<"Subject Code : "<<Book.getcode() <<endl;
   cout<<"Subject Name : "<<Book.gettitle()<<endl;
   cout<<"Credit Hour :  "<<Book.getcode().back()-'0'<<endl;
   cout<<"Score Earned : "<<Book.getscore() <<endl;
   cout<<"Grade Earned : "<<Book.getgrade() <<endl;
   cout<<"Grade Point :  "<< Book.getpointval()<<endl;
   cout<<"Point Earned : "<< Book.calcpoint()<<endl;


}
