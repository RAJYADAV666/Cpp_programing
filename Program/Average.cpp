#include<iostream>
using namespace std;

class Average
{
    private:
        int iNo1, iNo2,iNo3;

    public:

        Average(int x,int y,int z)
        {
            iNo1=x;
            iNo2=y;
            iNo3=z;
        }
        float Result()
        {
            float fAns=0;

            fAns=((iNo1+iNo2+iNo3)/3);
            
            return fAns;
        }
        
    
};
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    cout<<"Enter the First Number:"<<endl;
    cin>>iValue1;

    cout<<"Enter the Second Number:"<<endl;
    cin>>iValue2;

    cout<<"Enter the Third Number:"<<endl;
    cin>>iValue3;

    Average Aobj(iValue1,iValue2,iValue3);

    iRet=Aobj.Result();

    cout<<"The Average is "<<iRet;


    return 0;
}