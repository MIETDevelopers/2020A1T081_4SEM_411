//To add the details of a student using a parameterized constructor of student class
#include<iostream>
using namespace std;
class Students
{
  private:

        char* Name;
        int RNo;
        char* Semester;
        char* Branch;

  public:
    Students(char* a,int b,char* c,char*d)
    {

    Name = a;
    RNo = b;
    Semester = c;
    Branch = d;
    }
    void showdata()
    {

    cout<<"NAME :"<<Name<<ends;
    cout<<"ROLL NO : "<<RNo<<ends;
    cout<<"SEMESTER :"<<Semester<<ends;
    cout<<"BRANCH : "<<Branch<<endl;
      }
};
int main()
{
   Students a1("Osheen",1,"4th","CSE");
   Students a2("Akki",2,"4th","Commerce");
   Students a3("Shevait",3,"4th","NON MED");
   Students a4("Uttu",4,"4th","Medical");
       a1.showdata();
       a2.showdata();
       a3.showdata();
       a4.showdata();
return 0;
}
