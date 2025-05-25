#include<iostream>
using namespace std;

class Demo
{
    private:
        int iValue;
    
    public:
        Demo(int x)
        {
            iValue=x;
        }
        void Display()
        {   int i=0;

            for(i=1;i<=iValue;i++)
            {
                cout<<"RAJ YADAV"<<endl;
            }
        }    
};
int main()
{
    int iNo=0;

    cout<<"Enter the Number:"<<endl;
    cin>>iNo;

    Demo dobj(iNo);

    dobj.Display();

}