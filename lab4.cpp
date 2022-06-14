//To search student details by roll no. using a member function of student class.
//To get the results of students by roll no. using a member function of student class

#include<iostream>
using namespace std;
#define Total_Marks 100
class student
{
    char name[50];
    int rno;
    public:
    float m1,m2,m3,t;
    void get()
    {
        cout <<"Enter Name: ";
        cin>>name;
        cout <<"Enter Roll No: ";
        cin>>rno;
        cout<<"Enter the marks in Subject 1: ";
        cin>>m1;
        cout<<"Enter the marks in Subject 2: ";
        cin>>m2;
        cout<<"Enter the marks in Subject 3: ";
        cin>>m3;
    }
    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rno<<endl;
        cout<<"Subject 1 Marks: "<<m1<<endl;
        cout<<"Subject 2 Marks: "<<m2<<endl;
        cout<<"Subject 3 Marks: "<<m3<<endl;    }
    int roll()
    {
        return rno;
    }
    void update()
    {
        t=m1+m2+m3;
        cout<<"Maximum Marks is = "<<t<<"\nOut of "<<Total_Marks;
        cout<<"\nAverage Marks = "<<t/3;
        if (t>=99)
            cout<<"\nPassed";
        else
            cout<<"\nFailed";
    }
};
int main()
{
    int i,n,x,a;
    cout<<"Enter the number of Students: ";
    cin>>n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout<<"\nEnter details of student "<<i+1<<endl;
        s[i].get();
    }
    cout<<"\n1: To get the Detail by entering Roll No:";
    cout<<"\n2: To get the Result by entering Roll No:";
    cout<<"\nPlease enter your choice: ";
	cin>>a;
    switch (a)
    {
    case 1:
        cout<<"\nEnter the Roll No:";
        cin>>x;
        for (i=0;i<n;i++)
        {
            if(s[i].roll() == x)
            {
                s[i].print();
            }
        }
        break;
    case 2:
        cout<<"\nEnter the Roll No: ";
        cin>>x;
        for (i = 0; i < n; i++)
        {
            if (s[i].roll() == x)
            {
                s[i].update();
            }
        }
        break;
    default:
        break;
    }
    return 0;
}
