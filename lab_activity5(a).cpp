//To add the details of a course using a parameterized constructor of a course class.
#include<iostream>
using namespace std;
class course
{
    int c_Id;
    string c_Name;
    public:
    course(int i,string n)
    {
        c_Id=i;
        c_Name=n;
    }
    void display()
    {
        cout<<"Course Id: "<<c_Id<<endl;
        cout<<"Course Name: "<<c_Name<<endl;
    }
};
int main()
{
    course c(411,"C++");
    c.display();
}
