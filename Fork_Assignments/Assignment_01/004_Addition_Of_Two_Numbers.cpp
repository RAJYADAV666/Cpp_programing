#include<iostream>
using namespace std;

class Add
{
    public :
        int iValue1;
        int iValue2;

    Add()
    {
        iValue1=0;
        iValue2=0; 
    }  
    Add(int iNo1,int iNo2)
    {
        iValue1=iNo1;
        iValue2=iNo2;
        
    }  
    int Addtion()
    {
        int iAns=0;
        iAns=iValue1+iValue2;
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

    Add aobj(iNum1,iNum2);
    iRes=aobj.Addtion();

    cout<<"Addtion is :"<<iRes;
    return 0;
}