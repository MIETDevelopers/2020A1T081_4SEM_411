//Program to access private member functions
#include <iostream>
using namespace std;

class Student
{
private:
    int rNo;
    float percentage;
    //private member functions
    void TakeNumbersBegin(void)
    {
        cout<<"Input start..."<<endl;
    }
    void TakeNumbersBeginFinish(void)
    {
        cout<<"Input end..."<<endl;
    }

public:
    //public member functions
    void read(void)
    {
        //calling first member function
        TakeNumbersBegin();
        //read rNo and percentage
        cout<<"Enter roll number: ";
        cin>>rNo;
        cout<<"Enter percentage: ";
        cin>>percentage;
        //calling second member function
        TakeNumbersBeginFinish();
    }
    void print(void)
    {
        cout<<endl;
        cout<<"Roll Number: "<<rNo<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;
    }
};

int main()
{
    //declaring object of class student
    Student object1;

    //reading and printing details of a student
    object1.read();
    object1.print();

    return 0;
}
