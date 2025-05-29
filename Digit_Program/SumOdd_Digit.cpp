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

           int SumDigit()
           {
                 int iDigit=0;
                 int iSum=0;

                while(iValue!=0)
                {
                    iDigit=iValue % 10;

                    if(iDigit % 2==1)
                    {
                        iSum=iSum+iDigit;  
                    }

                    iValue =iValue/10;
                    
                }
                
                 return iSum;
           } 
};
int main()
{
    int iNo=0;
    int iRes=0;

    cout<<"Enter the Number:\n";
    cin>>iNo;

    Digit dobj(iNo);

    iRes=dobj.SumDigit();

    cout<<"The  Sum of  Odd Digit  is:"<<iRes;

    return 0;
}