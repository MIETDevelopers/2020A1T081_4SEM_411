//To create a student class, its constructor, destructor and member functions.
//To create a course class, its constructor, destructor and member functions.
#include<iostream>
using namespace std;
class student
{
    int rno;
    string name;
    string dept;
    public:
    student(string n,int r,string d)
    {
        name=n;
        rno=r;
        dept=d;
    }
    void display()
    {
        cout<<"\nStudent Name: "<<name<<endl;
        cout<<"Student Roll No: "<<rno<<endl;
        cout<<"Student Department: "<<dept<<endl;
        cout<<endl;
    }
    ~student(){}
};
class course
{
    int cId,m;
    string Cname;
    public:
    course(int id,string cn,int mnt)
    {
        cId=id;
        Cname=cn;
        m=mnt;
    }
    void display()
    {
        cout<<"\nCourse ID: "<<cId<<endl;
        cout<<"Course Name: "<<Cname<<endl;
        cout<<"Course Duration(In Months): "<<m<<endl;
        cout<<endl;
    }
    ~course(){}
};
int main()
{
    student s("Osheen",81,"CSE");
    s.display();
    course c(411,"C++",6);
    c.display();
    return 0;
}
