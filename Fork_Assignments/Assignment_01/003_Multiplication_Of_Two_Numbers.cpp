#include<iostream>
using namespace std;

class Mult
{
    public :
        int iValue1;
        int iValue2;

    Mult()
    {
        iValue1=0;
        iValue2=0; 
    }  
    Mult(int iNo1,int iNo2)
    {
        iValue1=iNo1;
        iValue2=iNo2;
        
    }  
    int Multiplication()
    {
        int iAns=0;
        iAns=iValue1 * iValue2;
        return iAns;
    }
};
int main()
{
    int iNum1=0;
    int iNum2=0;
    int iRes=0;

    cout<<"Enter the First Number"<<endl;
    cin>>iNum1;

    cout<<"Enter the Second Number"<<endl;
    cin>>iNum2;

    Mult mobj(iNum1,iNum2);
    iRes=mobj.Multiplication();

    cout<<"Multiplication is :"<<iRes;
    return 0;
}