#include<iostream>
#include<stdbool.h>

using namespace std;

class ChkEven
{   private:
        int iNo;

        public:
          ChkEven(int x)
          {
            iNo=x;
          }
          bool Even()
          {
            if(iNo%2==0)
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
    bool bRet=false;

    cout<<"Enter the Number:"<<endl;
    cin>>iValue;

    ChkEven cobj(iValue);

    bRet=cobj.Even();

    if(bRet==true)
    {
        cout<<"Number is Even:";
    }
    else
    {
        cout<<"Number is Odd";
    }


    return 0;
}
