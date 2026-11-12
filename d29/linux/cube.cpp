#include "cube.h"
void Cube::input()
{
	cin>>length>>width>>height;
}

int Cube::volume()
{
	return length*width*height;
}

void Cube::show()
{
	int vo=volume();
	cout<<vo<<endl;
}
