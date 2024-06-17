#ifndef FORM_H
#define FORM_H
#include<iostream>
#include<string>
using namespace std;
class Form {
private:
	string name;
	string ID;
	double math;
	double english;
	double chinese;
	double computer;
	double society;
public:
	Form();
	Form(string n, string d, double m, double e, double c, double t, double s);
	void setName(string n);
	void setID(string d);
	void setMath(double m);
	void setEnglish(double e);
	void setChinese(double c);
	void setComputer(double t);
	void setSociety(double s);
	string getName();
	string getID();
	double getMath();
	double getEnglish();
	double getChinese();
	double getComputer();
	double getSociety();
	double getAverage();
	void print();
	char getGrade();
};
#endif
