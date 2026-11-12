#ifndef CUBE_H
#define CUBE_H
#include <iostream>
using namespace std;	
class Cube
{
	int length;
	int width;
	int height;
public:
	void input();
	int volume();
	void show();
};
#endif
