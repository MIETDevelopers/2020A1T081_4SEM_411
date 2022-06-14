//Program to implement nested member functions of classes.
#include<iostream>
using namespace std;
class set
{
    int n,m;

    public:
    int largest(void){
        if (m>=n)
        return(m);
        else
        return(n);
    }
    void getdata(void){
        cout<<"Input values of m and n"<<"\n";
        cin>>m>>n;
    }
    void putdata(void){
        cout<<"largest value:"<<largest()<<"\n";

    }
};
int main(){
    set A;
    A.getdata();
    A.putdata();
    return 0;
}
