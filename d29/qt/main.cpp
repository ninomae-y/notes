#include <iostream>

using namespace std;

class Student
{
    string name;
    int age;
public:
    Student()
    {
        cout<<"无参构造函数"<<endl;
        name="无名氏";
        age=20;
    }
    Student(string n,int a)
    {
        cout<<"有参构造函数"<<endl;
        name=n;age=a;
    }
    void show()
    {
        cout<<name<<"  "<<age<<endl;
    }
};

int main()
{
    Student xm;
    xm.show();
    Student xh("xm",50);
    xh.show();
    return 0;
}
