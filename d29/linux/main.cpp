#include"student.h"
int main(int argc, const char *argv[])
{
	Student xm;
	xm.init("xm",30);
	xm.show();

	Student *p=new Student;
	p->init("tom",20);
	p->show();
	delete p;
	return 0;
}
