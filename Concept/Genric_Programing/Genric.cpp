#include<iostream>
using namespace std ;

template<class T>

T Addtion( T no1 , T no2)
{
    T ans ;
    ans = no1 + no2 ;
    return ans;
}

int main()
{
    int iRet =0;
    float fret =0.0;
    double dret = 0.0;


    iRet =Addtion(10,20);
    fret = Addtion(12.87,34.67);

    cout<<"Addtion is "<<iRet<<"\n";
    cout<<"Addtion is "<<fret<<"\n";

}