#include<iostream>
using namespace std;

class Percentage
{
    public:
        int iValue1;
        int iValue2;
        int iValue3;

        Percentage()
        {
            iValue1=0;
            iValue2=0;
            iValue3=0;
        }
        Percentage(int iNo1,int iNo2,int iNo3)
        {
            iValue1=iNo1;
            iValue2=iNo2;
            iValue3=iNo3;
        }

        float Calculate()
        {
            int iAns=0;
            float fRes=0.0;

            iAns=iValue1 + iValue2 +iValue3;
           fRes =(iAns/300.0)*100;

            return fRes;

        }
};
int main()
{

    int iMark1=0;
    int iMark2=0;
    int iMark3=0;

    float fAns=0.0;

    cout<<"Enter the first Subject Marks :"<<endl;
    cin>>iMark1;

    cout<<"Enter the Second Subject Marks :"<<endl;
    cin>>iMark2;

    cout<<"Enter the Third Subject Mark :"<<endl;
    cin>>iMark3;

    Percentage pobj( iMark1,iMark2,iMark3);
     fAns=pobj.Calculate();
     cout<<"Percentage is :"<<fAns;

    return 0;
}