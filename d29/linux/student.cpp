#include "student.h"
void Student::init(string n,int a)
{
	name=n;
	age=a;
}

void Student::show()
{
	cout<<name<<"  "<<age<<endl;
}
