//Program to implement the concept of classes and objects.
#include<iostream>
using namespace std;
class item
{
    int number;
    float cost;
    public:
    void getdata(int a,float b){
        number=a;
        cost=b;
    }
    void putdata(void){
        cout<<"number:"<<number<<"\n";
        cout<<"cost:"<<cost<<"\n";
    }
};
int main(){
    item x,y;
    x.getdata(200,175.50);
    x.putdata();
    y.getdata(300,125.23);
    y.putdata();
    return 0;
}
