/*#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

string fun(string *names)
{
	srand(time(0));
	int i=rand()%5;
	cout<<i;
	return names[i];
}

int main(int argc, const char *argv[])
{
	string names[]={"rose","jack","tom","a","b"};
	cout<<fun(names)<<endl;
	return 0;
}
*/




/*
#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
int main(int argc, const char *argv[])
{
	string names[]={"rose","jack","tom"};
	srand(time(0));
	while(true)
	{
		cout<<names[rand()%3]<<endl;
		sleep(1);
	}
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int  id;
	int score;
};

void fun(student *stu,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=stu[i].score;
	}
	cout<<sum/n<<endl;
	int max=stu[0].score,x=0;
	for(int i=1;i<n;i++)
	{
		if(max<stu[i].score)
		{
			x=i;
			max=stu[i].score;
		}
	}
	cout<<stu[x].name<<max<<endl;
}

int main(int argc, const char *argv[])
{
	student stu[3];
	for(int i=0;i<3;i++)
	{
		cout<<"输入姓名,学号,成绩"<<endl;
		cin>>stu[i].name>>stu[i].id>>stu[i].score;
	}
	fun(stu,3);
	return 0;
}
*/



/*
#include<iostream>
#include<string>
using namespace std;

class Cat
{
public:
	string color;
	int age;
	string sex;
	string name;
	void eat()
	{
		cout<<name<<"在吃<。)#)))≦"<<endl;
	}
	void jump()
	{
		cout<<name<<" "<<age<<"在跳"<<endl;
	}

	void init(string c,int a,string s,string n)
	{
		color=c;
		age=a;
		sex=s;
		name=n;
	}
};

int main(int argc, const char *argv[])
{
	Cat tom;
	tom.init("灰色",88,"男","tom");
//	tom.name="tom";
//	tom.age=22;
//	tom.color="灰色";
//	tom.sex="男";
	tom.eat();
	tom.jump();
	Cat jary;
	jary.init("白色",2456,"女","jary");
	jary.eat();
	jary.jump();
	return 0;
}
*/



/*
#include<iostream>
#include<string>
#define PI 3.14
using  namespace std;
class Circle
{
public:
	int radius;
	void setRadius(int a)
	{
		radius=a;
	}
	void getLength()
	{
		cout<<2*PI*radius<<endl;
	}
	void getArea()
	{
		cout<<PI*radius*radius<<endl;
	}
};

int main(int argc, const char *argv[])
{
//	Circle c1,c2;
//	c1.setRadius(5);
//	c1.getLength();
//	c2.setRadius(3);
//	c2.getArea();
	Circle *p=new Circle;
	p->setRadius(5);
	p->getLength();
	p->getArea();
	delete p;
	p=NULL;
	return 0;
}
*/



/*
#include<iostream>
using namespace std;
#include<string>

struct Node
{
	int data;
	void print()
	{
		cout<<"结构体:"<<data<<endl;
	}
};

class Student
{
	string name;
	int age;
public:
	void study()
	{
		cout<<name<< "  "<<age<<"  "<<score<<endl;
	}
	void init (string n,int a,int s)
	{
		name =n;
		age=a;
		score =s;
	}
private:
	int score;
};

int main(int argc, const char *argv[])
{
	Student tom;
	tom.init("tom",20,59);
	tom.study();
	Node n;
	n.data=100;
	n.print();
	return 0;
}
*/




/*
#include<iostream>
using namespace std;

class Student
{
public:
	string name;
private:
	int score;
	int weight;
	int money;
public:
	void setScore(int s)
	{
		if(s<0)
			cout<<"错误"<<endl;
		else
			score=s;
	}

	void setMoney(int m)
	{
		money=m;
	}

	int getScore()
	{
		return score;		
	}
	int getMoney()
	{
		return money;
	}
};

int main(int argc, const char *argv[])
{
	Student xm;
	xm.setScore(100);
	xm.getMoney(2000);
	cout<<xm.getScore()<<endl;
	cout<<xm.getMoney()<<endl;
	return 0;
}
*/





#include<iostream>
#include<string>
using namespace std;

class Student
{
	string name;
	int age;
public:
	void init(string n,int a);
	void show();
};

void Student::init(string n,int a)
{
	name=n;
	age=a;
}

void Student :: show()
{
	cout <<name<<"  "<<age<<endl;
}

int main(int argc, const char *argv[])
{
	Student *p=new Student;
	p->init("xm",20);
	p->show();
	delete p;
	return 0;
}






