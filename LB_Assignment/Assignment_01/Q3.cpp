#include<iostream>
using namespace std;

class Loop
{
    public:
        int i;

    Loop(int iNo)
    {
        i = iNo;
    }
    void Display()
    {
        int i =0;

        for(i =5; i>=1 ;i--)
        {
            cout<<"\n"<<i ;
        }
    }
};
int main()
{
    int ivalue=5;

    Loop lobj (ivalue);

    lobj.Display();
}