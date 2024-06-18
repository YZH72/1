#include "Form.h"
#include<iomanip>
Form::Form() : name(""), ID(""), math(0), english(0), chinese(0), computer(0), society(0) {}
Form::Form(string n, string d, double m, double e, double c, double t, double s) :
    name(n), ID(d), math(m), english(e), chinese(c), computer(t), society(s) {}
void Form::setName(string n) {
    name = n;
}
void Form::setID(string d) {
    ID = d;
}
void Form::setMath(double m) {
    math = m;
}
void Form::setEnglish(double e) {
    english = e;
}
void Form::setChinese(double c) {
    chinese = c;
}
void Form::setComputer(double t) {
    computer = t;
}
void Form::setSociety(double s) {
    society = s;
}
string Form::getName() {
    return name;
}
string Form::getID() {
    return ID;
}
double Form::getMath() {
    return math;
}
double Form::getEnglish() {
    return english;
}
double Form::getChinese() {
    return chinese;
}
double Form::getComputer() {
    return computer;
}
double Form::getSociety() {
    return society;
}
double Form::getAverage() {
    return (math + english + chinese + computer + society) / 5;
}
char Form::getGrade() {
    double average = getAverage();
    if (average >= 90) {
        return 'A';
    }
    else if (average >= 80) {
        return 'B';
    }
    else if (average >= 70) {
        return 'C';
    }
    else if (average >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}
void Form::print() {
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Math: " << math << endl;
    cout << "English: " << english << endl;
    cout << "Chinese: " << chinese << endl;
    cout << "Computer: " << computer << endl;
    cout << "Society: " << society << endl;
    cout << "Average: " << fixed << setprecision(1) << getAverage() << endl;
    cout << "Grade: " << getGrade() << endl;
    cout << endl;
}
