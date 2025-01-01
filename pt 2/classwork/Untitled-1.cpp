#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
#define MAX_SUBJECT_COUNT 10

class Subject
{
private:
	string name;
	string code;
	int score;

public:
	Subject();
	int credit() const;
	string grade() const;
	double point() const;
	void print() const;
    bool operator<(const Subject &a);
    friend int readUserInput(Subject subjects[]);
};
int readUserInput(Subject subjects[]){
    int x;
    cout<<"num of sub";
    cin>>x;
    for(int i = 0;i<x;i++){
        cout<<"subject code";
        cin>>subjects[i].code;
        cout<<"subject name";
        getline(cin,subjects[i].name);
        cin.ignore();
        cout<<"subject name"<<endl;
        cin>>subjects[i].score;
    }
    return x;
}
string Subject :: grade() const{
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
double Subject::point() const{
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
void Subject :: print() const{
    cout<< left << setw(15)<<code;
    cout<< left << setw(30)<<name;
    cout << left << setw(10)<<credit();
    cout << left << setw(10)<<score;
    cout << left << setw(10) <<grade();
    cout << left << setw(10)<< point();
    cout << left << setw(10)<<point()*credit();

}
 bool Subject :: operator<(const Subject &a){
    return (score < a.score);
 }
 Subject comparison(Subject &a, Subject &b){
    if (a < b)
    return a;
    else
    return b;
 }


int main(){}