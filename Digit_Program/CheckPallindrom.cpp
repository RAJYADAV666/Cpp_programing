#include<iostream>
#include<stdbool.h>
using namespace std;

class ChkPalindrom
{
    private:
        int iNo;
    
    public:

         ChkPalindrom(int x)
        {
            iNo=x;
        }

        bool Palindrom()
        {
            int iDigit=0;
            int iRev=0;
            int iCopy=iNo;

            while(iNo!=0)
            {
                iDigit=iNo % 10;

                iRev=(iRev*10)+iDigit;

                iNo=iNo/10;

            }

            if(iRev==iCopy)
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
    int iValue=0;
    bool bret=false;

    cout<<"Enter the Number:\n";
    cin>>iValue;

    ChkPalindrom cobj(iValue);

    bret=cobj.Palindrom();

    if(bret==true)
    {
        cout<<"Number is Palindrom";
    }
    else
    {
        cout<<"Number is Not Palindrom";
    }

    return 0;
}