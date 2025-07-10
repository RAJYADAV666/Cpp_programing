#include<iostream>
using namespace std;

class Division
{
    public : 
        int iNo;

    Division(int i)
    {
        iNo = i;
    }   
    bool Check()
    {
        if(iNo % 5==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 

};
int main()
{
    int iValue =0;
    bool bRet = false;

    cout<<"Enter the Number\n";
    cin>>iValue;

    Division dobj (iValue);

    bRet = dobj.Check();

    if(bRet == true)
    {
        cout<<"Number is Divsible 5 :";
    }
    else
    {
        cout<<"Number is Not Divisible 5 :";
    }

}