#include<iostream>
using namespace std;

class Digit
{
    private:
        int iValue;
    
    public:
           Digit(int x)
           {
             iValue=x;
           }

           int ReverseDigit()
           {
                 int iDigit=0;
                 int iSum=0;
                 int iRev=0;


                while(iValue!=0)
                {
                    iDigit=iValue % 10;

                    iRev=(iRev*10)+iDigit;

                    iValue =iValue/10;
                    
                }
                
                 return iRev;
           } 
};
int main()
{
    int iNo=0;
    int iRes=0;

    cout<<"Enter the Number:\n";
    cin>>iNo;

    Digit dobj(iNo);

    iRes=dobj.ReverseDigit();

    cout<<"The  Reverse Number is:"<<iRes;

    return 0;
}