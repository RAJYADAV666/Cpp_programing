#include<iostream>
using namespace std;

class Divide
{
    public:
            int i;
            int j;

    Divide(int iValue1 , int iValue2)
    {
        i=iValue1;
        j=iValue2;
    }
    int Div()
    {
        int iAns=0;

        iAns = i / j;
        return iAns;
    }

};
int main()
{
    int iNo1=0;
    int iNo2=0;
    int iRes =0;

    cout<<"Enter the First Number:\n";
    cin>>iNo1;

    cout<<"Enter the Second Number:\n";
    cin>>iNo2;

    Divide dobj(iNo1,iNo2);

   iRes=dobj.Div();

   cout<<"The Division is :"<<iRes;

}