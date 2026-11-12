#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int age;
public:
	void init (string n,int a);
	void show();
};

#endif
