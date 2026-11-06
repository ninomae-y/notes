/*#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

bool fun(int score)
{
	if(score>=60)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, const char *argv[])
{
	Student s1;
	cout<<"输入学生姓名"<<endl;
	getline(cin,s1.name);
	cout<<"输入学生年龄,成绩"<<endl;
	cin>>s1.age>>s1.score;
	cout<<s1.name<<"同学,年龄"<<s1.age<<",成绩"<<s1.score
		<<(fun(s1.score)?"是":"否")<<endl;
	return 0;
}
*/






/*
#include<iostream>
#include<string>
using namespace std;

int main(int argc, const char *argv[])
{
	string str;
	cout<<"输入字符串"<<endl;
	getline(cin,str);
	int a=0;
	int b=0;
	int c=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]<='Z'&&str[i]>='A')
		{
			a++;
		}
		else if(str[i]<='z'&&str[i]>='a')
		{
			b++;
		}
		else if(str[i]<='9'&&str[i]>='0')
		{
			c++;
		}
	}
	cout<<"大写字母:"<<a<<"小写字母:"<<b<<"数字:"<<c<<endl;
	return 0;
}
*/





/*
#include<iostream>
using namespace std;

void fun(int &temp)
{
	temp=100;
}

int main(int argc, const char *argv[])
{
	int a=20;
	fun(a);
	cout<<a<<endl;
#if 0
	int num=12;
	int num2=5;
	int &ref =num;
	ref=num2;
	cout<<num<<"  ref"<<ref<<" num2"<<num2<<endl;
	cout<<&num<< " &ref"<<&ref<<" &num2"<<&num2<<endl;
#endif
	return 0;
}
*/



/*
#include<iostream>
using namespace std;

void fun(int& a,int& b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void fun1(int &c,int &d)
{
	c=c+d;
	d=c-d;
	c=c-d;
}

void fun2(int &e,int &f)
{
	e=e^f;
	f=e^f;
	e=e^f;
}

int main(int argc, const char *argv[])
{
	int a=20,b=30;
	fun(a,b);
	int c=1,d=2;
	fun1(c,d);
	int e=24,f=567;
	fun2(e,f);
	cout<<a<<b<<endl;
	cout <<c<<"  "<<d<<endl;
	cout<< e<<"    "<<f<<endl;
	return 0;
}
*/




/*
#include<iostream>
using namespace std;

int &fun()
{
	static int num=30;
	cout<<"num= "<<num<<endl;
	return num;
}

int main(int argc, const char *argv[])
{
	int &temp=fun();
	temp=10;
	fun();
//	cout<<"返回值:"<<fun()<<endl;
//	fun()=10;
//	fun();
	return 0;
}
*/


/*
#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int num=10;
	const int &ref=num;
	num=30;
	cout<<num<<" "<<ref<<endl;
	const int &ref2=100;
	return 0;
}
*/



/*
#include<iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	int *p=new int [5];
	for(int i=0;i<5;i++)
	{
		p[i]=i;
		cout<<p[i]<<endl;
	}
	delete[] p;
#if 0
//	int *p=new int;
//	*p=20;
	int *p=new int(40);
	cout<<*p<<endl;
	delete p;
	p=NULL;
	return 0;
#endif
}
*/






/*
#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, const char *argv[])
{
	char *p=new char[5];
	strcpy(p,"abcd");
	cout<<p<<endl;
	
	int *q=new int [5];
	for(int i=0;i<5;i++)
	cout<<q[i]<<endl;

	int *q1=new int [5]();
	for(int i=0;i<5;i++)
	cout<<q1[i]<<endl;

	int *q2=new int [5]{1,2,3,4,5};
	for(int i=0;i<5;i++)
	cout<<q2[i]<<endl;
	delete [] p;
	delete[]q;
	delete []q1;
	delete[] q2;

	return 0;
}
*/



/*
#include<iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	int a;
	cin>>a;
	int *p=new int[a];
	for(int i=0;i<a;i++)
	{
		cin>>p[i];
	}
	int max=p[0],min=p[0],sum=p[0];
	for(int i=1;i<a;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
			sum+=p[i];
		}
		else if(p[i]<min)
		{
			min=p[i];
			sum+=p[i];
		}
		else
			sum+=p[i];
	}
	cout<<max<<"  "<<min<<"  "<<(float)sum/a<<endl;
	delete []p;
	return 0;
}
*/






/*
#include<iostream>
using namespace std;

void print(int num)
{
	cout<<"print(int)"<<num <<endl;
}

void print(string str)
{
	cout<<"print(string)"<<str<<endl;
}

void print()
{
	cout<<"print()"<<endl;
}

void print(int num,string s)
{
	cout<<"print(int ,string)"<<endl;
}

void print(string s,int num)
{
	cout<<"print(string ,int)"<<endl;
}

int main(int argc, const char *argv[])
{
	print();
	print(34);
	print("hello");
	print(34,"hello");
	print("hello",34);
	return 0;
}
*/



/*
#include<iostream>
using namespace std;

int myDev(int x,int y)
{
	return x/y;
}

float myDev(float m,float n)
{
	return m/n;
}

int main(int argc, const char *argv[])
{
	int x,y;
	float m,n;
	cin>>x>>y;
	cin>>m>>n;
	int a=myDev(x,y);
	float b=myDev(m,n);
	cout<<a<<"   "<<b<<endl;
	return 0;
}
*/






/*
#include<iostream>
using namespace std;

void fun(int a,int b=20,int c=30)
{
	cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;
}

int main(int argc, const char *argv[])
{
	fun(70,80,90);
	fun(70,80);
	fun(70);
//	fun();
	return 0;
}
*/






#include<iostream>
using namespace std;

bool isLeapYear(int year=2016);

bool isLeapYear(int year)
{
	return year%4==0&&year%100!=0||year%400==0;
}

int main(int argc, const char *argv[])
{
	cout<< isLeapYear(2005)<<endl;;
	return 0;
}
