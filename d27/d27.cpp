/*#include<iostream>

int main(int argc,const char *argv[])
{
	std::cout<<"hello world"<<std::endl;
	std::cout<<"haha";
	int num=4;
	std::cout<<"num="<<num<<'\n';
	double a=3.14;
	std::cout<<"a="<<a<<std::endl;




	return 0;
}
*/



/*
#include<iostream>
int  main(int argc, const char *argv[])
{
	std::cout<<"输入年龄"<<std::endl;
	int age;
//	std::cin>>age;
//	std::cout<<age<<'\n';
	int arr[5]={0};
	for(int i=0;i<5;i++)
	{
		std::cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		std::cout<<arr[i]<<" ";
	}
	std::cout<<'\n';




	return 0;
}
*/



/*
#include<iostream>
int main(int argc, const char *argv[])
{
	char a;
	std::cin>>a;
	if(a>=65&&a<=90)
	{
		a+=32;
	}
	else if(a>=97&&a<=122)
	{
		a-=32;
	}
	std::cout<<a<<std::endl;
	return 0;
}
*/



/*
#include<iostream>
struct Student
{
	char name[20];
	int score;
};
int main(int argc, const char *argv[])
{
	Student tom={0};
	std::cin>>tom.name>>tom.score;
	std::cout<<"name:"<<tom.name<<" score:"<<tom.score<<std::endl;
	return 0;
}
*/



/*
#include<iostream>
//using namespace std;

using std::cout;
using std::endl;
using std::cin;
namespace room1010
{
	int getMax=200;
	char name[]="tom";
	void print()
	{
		cout<<getMax<<" "<<name<<endl;
	}
};
namespace room1011
{
	char name[]="xioaming";
	int age=25;
	void print()
	{
		cout<<name<<" "<<age<<endl;
	}
}
int age=100;
char name[]="jarry";
using namespace room1010;
using namespace room1011;
//int getMax(int a,int b)
//{
//	return a>b?a:b;
//}
int main(int argc, const char *argv[])
{
	cout<<::age<<endl;
	cout<<::name<<endl;
	cout<<room1010::name<<endl;
//	int max=getMax(5,3);
//	cout<<"max is"<<max<<endl;
//	cout<<room1010::getMax<<endl;
//	room1010::print();
//	room1011::print();
//	cout <<getMax<<endl;
//	cout<<room1010::name<<endl;
	return 0;
}
*/







/*
#include<iostream>
using namespace std;
bool isZero (int num)
{
	if(num==0)
		return true;
	else
		return false;
}
int main(int argc, const char *argv[])
{
	cout<<isZero(5)<<endl;
	if(isZero(0))
		cout<<"是零"<<endl;
	else
		cout<<"非零"<<endl;
#if 0
	int a;
	bool b1=12;
	cout<<boolalpha<<b1<<endl;
	bool b2=false;
	cout<<noboolalpha<<b2<<endl;
	cout<<"占用字节"<<sizeof(bool)<<endl;
	return 0;
#endif
}*/



/*
#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char *argv[])
{
	string str="hello";
	std::string str2="world";
	cout<<str<<endl;
	cout<<str2<<endl;
	str=str2;
	cout<<str<<endl;
	string  str3="good";
	str+=str3;
	cout <<str<<endl;
	cout <<(str+str3)<<endl;
	string s1="hello";
	string s2="helo";
	cout<<(s1>s2)<<endl;
	string s3="admin";
	if(s1==s3)
	{
		cout<<"相同"<<endl;
	}
	else
	{
		cout <<"账号错误"<<endl;
	}
	cout<<"s1:"<<boolalpha<<s1.empty()<<endl;
	string s4="";
	cout<<"s4:"<<s4.empty()<<endl;
	cout<<"s3长度"<<s3.size()<<endl;
	return 0;
}
*/




/*
#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	cout<<"输入一个字符串"<<endl;
//	cin>>str;
//	cout<<str<<endl;
	getline(cin ,str);
	cout<<str<<endl;




#if 0
	string str ="good study";
	for(int i=0;i<str.size();i++)
	{
		cout<<str[i]<<endl;
	}
#endif
	return 0;
}
*/



/*
#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	getline(cin ,str);
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]+=32;
		}
		cout<<str[i];
	}
	return 0;
}
*/




#include<iostream>
using namespace std;

struct Student
{
	string name;
	string stuNo;
};

#define N 3

void inputStuInfo(Student *p)
{
	for(int i=0;i<N;i++)
	{
		cout<<"输入姓名,输入学号"<<endl;
		cin>>p[i].name>>p[i].stuNo;
	}
}

void findStu(string searchName,Student *p)
{
	for(int i=0;i<N;i++)
	{
		if(searchName==p[i].name)
		{
			cout<<p[i].name<<"  "<<p[i].stuNo<<endl;
			return;
		}
	}
	cout<<"not found"<<endl;
}

int main(int argc, const char *argv[])
{
	Student stus[N];
	inputStuInfo(stus);
	cout<<"输入要查找的学生姓名"<<endl;
	string name;
	cin>>name;
	findStu(name,stus);
	return 0;
}
