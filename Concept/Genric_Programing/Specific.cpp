#include<iostream>
using namespace std ;
int Addtion(int iValue1 , int iValue2)
{
    int iAns =0;
    iAns = iValue1 +iValue2;
}

float Addtion(float iValue1 , float iValue2)
{
    float fAns =0.0;

    fAns = iValue1 +iValue2;

    return fAns;
}
int main()
{
    int iRet =0;
    float fret =0.0;
    double dret = 0.0;


    iRet =Addtion(10,20);
    fret = Addtion(12,34);

    cout<<"Addtion is "<<iRet<<"\n";
    cout<<"Addtion is "<<fret<<"\n";

}