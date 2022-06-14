//To update the details of a course using a roll no using a member function of course class.
#include<iostream>
using namespace std;
class student
{
    char name[50],dept[50],city[50];
    int r_no,age,pc;
    public:
    void get()
    {
        cout <<"Enter Name: ";
        cin>>name;
        cout <<"Enter Roll No: ";
        cin>>r_no;
        cout<<"Enter Department: ";
        cin>>dept;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter Pincode: ";
        cin>>pc;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<r_no<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Pincode: "<<pc<<endl;
    }
    int roll()
    {
        return r_no;
    }
    void update()
    {
        cout <<"\nEnter Name: ";
        cin>>name;
        cout <<"Enter Roll No: ";
        cin>>r_no;
        cout<<"Enter Department: ";
        cin>>dept;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter City: ";
        cin>>city;
        cout<<"Enter Pincode: ";
        cin>>pc;
    }
};
int main()
{
    int i,n,x;
    cout<<"Enter the number of Students: ";
    cin>>n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        s[i].get();
    }
    cout<<"\nEnter the Roll No of the student whose data you want to Update: ";
    cin>>x;
    for (i = 0; i < n; i++)
    {
        if (s[i].roll() == x)
            {
                cout<<"\nDetails of Roll No "<<x<<" before updation is: "<<endl;
                s[i].print();
                s[i].update();
                cout<<"\nDetails of Roll No "<<x<<" after updation is: "<<endl;
                s[i].print();
            }
    }
    return 0;
}
