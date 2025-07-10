#include<iostream>
using namespace std;

class Loop
{
    public : 
        int iNo;

        Loop(int i)
        {
            iNo = i;
        }

        void Display()
        {   
            int iCnt =0;
            for(iCnt = 1; iCnt <=iNo; iCnt++)
            {
                cout<<" * ";
            }
        }

};
int main()
{
    int iValue =0;

    cout<<"Enter the Number\n";
    cin>>iValue;

    Loop lobj(iValue);
    
    lobj.Display();

}