//To update the details of a student using a member function of student class.
//To delete the details of a student using a member function of student class.
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
    void update()
    {
        cout<<"\nEnter Student Name: ";
        cin>>name;
        cout<<"Enter Student Roll No: ";
        cin>>rno;
        cout<<"Enter Student Department: ";
        cin>>dept;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter Pincode: ";
        cin>>pincode;
    }
    void del()
    {
        cout<<"\nDetails Deleted";
    }
    ~student(){}
};
int main()
{
    student s("Osheen",81,"CSE",20,"Jammu",181205);
    s.display();
    cout<<"Updating the Details";
    s.update();
    cout<<"Details Updated";
    cout<<"\n\nDeleting the Details";
    s.del();

    return 0;
}
