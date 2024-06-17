#include "Form.h"
#include<iomanip>
// Construct
Form::Form() : name(""), ID(""), math(0), english(0), chinese(0), computer(0), society(0) {}

Form::Form(string name, string ID, double math, double english, double chinese, double computer, double society) :
    name(name), ID(ID), math(math), english(english), chinese(chinese), computer(computer), society(society) {}
// Setters
void Form::setName(string name) {
    this->name = name;
}

void Form::setID(string ID) {
    this->ID = ID;
}

void Form::setMath(double math) {
    this->math = math;
}

void Form::setEnglish(double english) {
    this->english = english;
}

void Form::setChinese(double chinese) {
    this->chinese = chinese;
}

void Form::setComputer(double computer) {
    this->computer = computer;
}

void Form::setSociety(double society) {
    this->society = society;
}

// Getters
string Form::getName() {
    return this->name;
}

string Form::getID() {
    return this->ID;
}

double Form::getMath() {
    return this->math;
}

double Form::getEnglish() {
    return this->english;
}

double Form::getChinese() {
    return this->chinese;
}

double Form::getComputer() {
    return this->computer;
}

double Form::getSociety() {
    return this->society;
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
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->ID << endl;
    cout << "Math: " << this->math << endl;
    cout << "English: " << this->english << endl;
    cout << "Chinese: " << this->chinese << endl;
    cout << "Computer: " << this->computer << endl;
    cout << "Society: " << this->society << endl;
    cout << "Average: " << fixed << setprecision(1) << getAverage() << endl;
    cout << "Grade: " << getGrade() << endl;
}
