//To add the details of a student using a parameterized constructor of student class.
#include<iostream>
using namespace std;
class student
{
    int rno,age,pincode;
    string name, dept,city;
    public:
    student(string n,int r,string d,int a,string c,int p)
    {
        name=n;
        rno=r;
        dept=d;
        age=a;
        city=c;
        pincode=p;
    }
    void display()
    {
        cout<<"\nStudent Name: "<<name<<endl;
        cout<<"Student Roll No: "<<rno<<endl;
        cout<<"Student Department: "<<dept<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Pincode: "<<pincode<<endl;
        cout<<endl;
    }
};
int main()
{
    student s("Osheen",81,"CSE",20,"Jammu",181205);
    s.display();
    return 0;
}
