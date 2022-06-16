//MINI PROJECT ON YEAR BOOK
#include<process.h>             //small macros required in some functions
#include<fstream>               //file handline operations
#include<bits/stdc++.h>         //function like setw and other small dependencies
#include<iostream>              //input output functions
#include<conio.h>               //console input output functions
#include<stdio.h>
#include<string>            //fro using string
#include<Windows.h>         //for sleep function.
using namespace std;

//Created class

class student
{
     int rollno, age;
    char name[30], ffac[40], aim[40], quote[150];


    public:

    void getdata()          //to get input from user
    {
        cout<<"for spaces use '-'.";
        cout<<"\nEnter The roll number of student: ";
        cin>>rollno;

        cout<<"\nEnter The Name of student: " ;
        cin>>name;


        cout<<"\nEnter your age : ";
        cin>>age;


        cout<<"\nEnter The name of your favourite teacher : ";
        cin>>ffac;

        cout<<"\nEnter what do you wanna become in future : ";
        cin>>aim;

        cout<<"\nEnter a single line quote you wanna share : ";
        cin>>quote;

    }


    void showdata()                         //to display the information
    {
        cout<<"\nRoll number of student : "<<rollno;
        cout<<"\nName of student : "<<name;
        cout<<"\nAge : "<<age;
        cout<<"\nFovourite Faculty member : "<<ffac;
        cout<<"\nAim in Life : "<<aim;
        cout<<"\nQuote : "<<quote;
    }
    void Aio()                  //to show everything in one line
    {
        cout<<rollno<<setw(12)<<name<<setw(15)<<age<<setw(10)<<ffac<<setw(10)<<aim<<setw(10)<<quote<<setw(100)<<endl;
        getch();
    }
      int retrno()              // return roll number , to be used in many functions (search, modify ,delete)etc .
    {
        return rollno;
        getch();
    }
};

    fstream file, file2;        //two files created one to add details one used to store temporary data to use delete function.
    student s;

    void writedata()            //write data into the file
{
    file.open("f.dat",ios::out|ios::app);
    s.getdata();
    file.write((char*)&s,sizeof(student));
    file.close();
    cout<<"\n\nThe information has been saved . ";
    getch();
}

void displaydata()              // read data from the file
{
    system("cls");
    cout<<"\n\n\n\t\t-x-x-x-x-x------ALL ENTRIES---x-x-x-x-x-x-\n\n";
    file.open("f.dat",ios::in);
    while(file.read((char*)&s,sizeof(student)))
    {
        s.showdata();
        cout<<"\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
        getch();
    }
    file.close();
    getch();
}

template<typename T>                //template used
void search(T n)                // to search data of perticular student by roll number
{
    int flag=0;
    file.open("f.dat",ios::in);
    while(file.read((char*)&s,sizeof(student)))
    {
        if(s.retrno()==n)
        {
            system("cls");
            s.showdata();
            flag=1;
        }
    }
    file.close();
    if(flag==0)
        cout<<"\n\nRoll Number Does not Exists !!";
    getch();
}


void welcome()                  //a small welcome screen.
{
    system("cls");
	system("color 5F");

	char a = 177, b = 219;
	cout<<"\n\t\t\t\t\tx------------Project By------------x \n\t\t\t\t\t| Sahil Sharma \t\t2021a1l011 |\n\t\t\t\t\t| Osheen pandita        2020a1t081 |\n\t\t\t\t\t| Pranab sharma\t\t2021a1l010 |\n\t\t\t\t\t| Humaira Gani\t\t2020a1r124 |\n\t\t\t\t\tx----------------------------------x";
	cout<<"\n\n\n\t\t\t\t\tWelcome\n";
	cout<<endl;
	cout<<"\t\t\t\t\t";

	for(int i = 0;i<26;i++)

	cout<<a;

	cout<<"\r";
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < 26 ; i++)
	{
		cout<<b;
		Sleep(100);
	};
}
void mod()                      //modify function to modify specific entry
{
    int no;
    int found=0;
    system("cls");
    cout<<"\nEnter Roll number of the student to Modify Entry : ";
    cin>>no;
    file.open("f.dat",ios::in|ios::out);
    while(file.read((char*)&s,sizeof(student)) && found==0)
    {
        if(s.retrno()==no)
        {
            s.showdata();
            cout<<"\nEnter New Details"<<endl;
            s.getdata();
            int pos=-1*sizeof(s);
            file.seekp(pos,ios::cur);
            file.write((char*)&s,sizeof(student));
            cout<<"\n\n\t Entry Updated";
            found=1;
        }
    }
    file.close();
    if(found==0)
        cout<<"\n\n No Entry Found ";
    getch();
}

void deleteEntry()                      //function to delete specific entry
{
    int no;
    system("cls");
    cout<<"\n\n\n\t-x-x-x-x-x-x-----Delete Entry-----x-x-x-x-x-x-x-x-x-";
    cout<<"\n\nPlease Enter The roll number of student You Want To Delete: ";
    cin>>no;
    file.open("f.dat",ios::in|ios::out);
    fstream fp2;
    file2.open("temp.dat",ios::out);
    file.seekg(0,ios::beg);
    while(file.read((char*)&s,sizeof(student)))
    {
        if(s.retrno()!=no)
        {
            file2.write((char*)&s,sizeof(student));
        }
    }
    file2.close();
    file.close();
    remove("f.dat");
    rename("Temp.dat","f.dat");
    cout<<"\n\n\tEntry Deleted ..";
    getch();
}

void Disp()                 // used to display all the entries in the file at once
{
    system("cls");
    file.open("f.dat",ios::in);
    if(!file)
    {
        cout<<"No File Found\n\n\n Go To Entry Menu to create File";
        cout<<"\n\n\n Program is Terminated ....";
        getch();
        exit(0);
    }

    cout<<"\n\n\t\tALL Entries \n\n";
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
    cout<<"Roll No. Name          Age   Fav Faculty  Aim     Quote                               ";
    cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";

    while(file.read((char*)&s,sizeof(student)))
    {
        s.Aio();
    }
    getch();
    file.close();
    getch();
}



void editpage()                             //menu page
{
    system("cls");
    char ch2;
    cout<<"\n\n\n\t-x-x-x-x-x-x-----ENTRY MENU-----x-x-x-x-x-x-x-";
    cout<<"\n\n\t1.New Entry";
    cout<<"\n\n\t2.See All Entries";
    cout<<"\n\n\t3.Search for specific Roll Number ";
    cout<<"\n\n\t4.Modify an Entry";
    cout<<"\n\n\t5.Delete an Entry";
    cout<<"\n\n\t6.Main Menu";
    cout<<"\n\n\tEnter Choice: ";

    cin>>ch2;
    switch(ch2)
    {
    case '1':
        system("cls");
        writedata();
        break;

    case '2':
        displaydata();
        break;

    case '3':
        int num;
        system("cls");
        cout<<"\n\n\tPlease Enter The roll number: ";
        cin>>num;
        search(num);
        break;

    case '4':
        mod();
        break;

    case '5':
        deleteEntry();

        break;

    case '6':
        break;

    default:
        cout<<"\a";
        editpage();
    }
}


int main()                          //main program to run everything.
{
    char ch;

    welcome();
    do
    {
        system("cls");
        cout<<"\n\n\n\t-x-x-x-x-x-x------MAIN MENU------x-x-x-x-x-x-";
        cout<<"\n\n\t01. Lets Go";
        cout<<"\n\n\t02. EXIT";
        cout<<"\n\n\t\t\t Enter 1 or 2 : ";
        ch=getche();
        switch(ch)
        {

        case '1':
            editpage();
            break;
        case '2':
            exit(0);
        default :
            cout<<"\a";
        }
    }
    while(ch!='2');
}
/* additional function for future use

void authentication()                       //this function is used for getting a password authentication screen
{
    system("cls");

    string password;

    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";

    do
    {
        cin >> password;

        if (password != "example")        //instead of example u can use anything u want o set as password
        {
            system("cls");
            cout << "\n\n\n\n\n\t\t"
                 << "wrong password!, try again or type 'menu' to Navigate to Main Menu";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Menu" || password == "menu" || password == "MENU")
        {
            mainMenu();
        }

    }

    while (password != "password");

}
*/
