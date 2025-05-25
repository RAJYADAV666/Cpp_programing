#include<iostream>
using namespace std;

class Mult
{   private:
           int iValue1;
           int iValue2;

    public:

        Mult(int X,int Y)
       {
           iValue1=X;
           iValue2=Y;
       }

       int Multiplication()
      {
         int Ans=0;

         Ans=iValue1*iValue2;
         return Ans;
      }

};
int main()
{
    int iNo1=0;
    int iNo2=0;
    int iRet=0;

    cout<<"Enter the First Number:"<<endl;
    cin>>iNo1;

    cout<<"Enter the Second Number:"<<endl;
    cin>>iNo2;

    Mult mobj(iNo1,iNo2);

    iRet=mobj.Multiplication();

    cout<<"Multiplication is "<<iRet;

    return 0;

}
