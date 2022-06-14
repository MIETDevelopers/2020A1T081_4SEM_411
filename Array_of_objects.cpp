//Program to demonstrate an array of objects.
#include<iostream>
using namespace std;
class employee
{
    char name[30];
    float age;
    public:
    void getdata(void){
        cout<<"enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    void putdata(void){
        cout<<"Name:"<<name<<"\n";
        cout<<"Age:"<<age<<"\n";
    }
};
int main(){
    employee manager[3];
    for(int i=0;i<3;i++){
        cout<<"\n Manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<3;i++){
        cout<<"\n Details of manager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}
