//Write a program to implement returning objects in a function.
#include<iostream>
using namespace std;
class weight
{
    int kilogram;
    int gram;
public:
    void getdata ();
    void putdata ();
    void sum_weight (weight,weight) ;
    weight sum_weight (weight) ;
} ;
void weight :: getdata()
{
    cout<<"/nKilograms:";
    cin>>kilogram;
    cout<<"Grams:";
    cin>>gram;
}
void weight :: putdata ()
{
    cout<<kilogram<<" Kgs. and"<<gram<<" gros.\n";
}
void weight :: sum_weight(weight w1,weight w2)
{
    gram = w1.gram + w2.gram;
    kilogram=gram/1000;
    gram=gram%1000;
    kilogram+=w1.kilogram+w2.kilogram;
}
weight weight :: sum_weight(weight w2)
{
    weight temp;
    temp.gram = gram + w2.gram;
    temp.kilogram=temp.gram/1000;
    temp.gram=temp.gram%1000;
    temp.kilogram+=kilogram+w2.kilogram;
    return(temp);
}
int main ()
{
    weight w1,w2,w3;
    cout<<"Enter weight in kilograms and grams\n";
    cout<<"\n Enter weight #1" ;
    w1.getdata();
    w3 = w1.sum_weight (w2);
    cout<<" \n Enter weight #2" ;
    w2.getdata();
    w3.sum_weight(w2,w3);
    cout<<"/n Weight #1 = ";
    w1.putdata();
    cout<<"Weight #2 = ";
    w2.putdata();
    cout<<"Total Weight = ";
    w3.putdata();
    return 0;
}
