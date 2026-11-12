#include "cube.h"
int main(int argc, const char *argv[])
{
	Cube c;
	c.input();
	c.show();
	Cube *p=new Cube;
	p->input();
	p->show();
	delete p;
	return 0;
}
