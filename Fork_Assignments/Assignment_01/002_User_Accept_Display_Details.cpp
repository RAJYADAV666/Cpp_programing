#include<iostream>
using namespace std;

class User
{
    public:
        char Name[30];
        int RollNo;
        char Course[30];
        char City[10];

     User()
     {
        char Name[30]={'\0'};
        int RollNo=0;
        char Course[30]={'\0'};
        char City[30]={'\0'};

     }  
     void Accept_Details()
     {
         cout<<"Enter the Student Name"<<endl;
         cin>>Name;

         cout<<"Enter the Roll Name"<<endl;
         cin>>RollNo;

         cout<<"Enter the Course"<<endl;
         cin>>Course;

         cout<<"Enter the City"<<endl;
         cin>>City;

     } 
     void Display_Details()
     {
        cout<<"Student Name :"<<Name<<endl;
        cout<<"Roll Number :"<<RollNo<<endl;
        cout<<"Course Name :"<<Course<<endl;
        cout<<"City Name   : "<<City<<endl;
     }

};

int main()
{
    User uboj;
    uboj.Accept_Details();
    uboj.Display_Details();

    return 0;
}