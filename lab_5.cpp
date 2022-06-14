//Design Employee management system with following details : Employee name, id, position in company and salary.
//Input details of employees using member functions. And display using other member functions.
//Enter different employee type as follows: Managers: 2, Nos.Foreman: 4,Nos.Workers: 17 Nos.

#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int id;
    char position[30];
    float salary;
public:
    void getdata(void){
        cout<<"Enter Employee id , Name  , Position, Salary  "<<endl;
        cin>>id>>name>>position>>salary;

    }
    void putdata(void){
        cout<<id<<"   "<<ends<<name<<"   "<<ends<<position<<"    "<<ends<<salary<<"    "<<endl;
    }
};

int main(){

    employee manager[2];
    for(int i=0;i<2;i++){
        cout<<ends<<"Manager"<<i+1<<endl;
        manager[i].getdata();}
        //
        //
          employee Foreman[4];
    for(int i=0;i<4;i++){
        cout<<ends<<"Foreman"<<i+1<<ends;
        Foreman[i].getdata();}
        //
        //
        employee Worker[17];
    for(int i=0;i<17;i++){
        cout<<ends<<"Worker"<<i+1<<ends;
        Worker[i].getdata();
    }
    //
    //
    cout<< "Name    Employee    Position    Salary"<<endl;
    for(int i=0;i<2;i++){
        cout<<ends<<i+1<<ends;
        manager[i].putdata();
        //

        //

    }
    for(int i=0;i<4;i++){
        cout<<endl<<i+1<<endl;
        Foreman[i].putdata();
        //

        //

    }
    for(int i=0;i<17;i++){
        cout<<endl<<i+1<<endl;
        Worker[i].putdata();
    }
    return 0;
}
