#include<iostream>
#include<windows.h>
#include<string>
#include <system_error>
using namespace std;
int main()
{
    int marks[4]={55,55,44,330};
    //you can change the value of a array
    cout<<marks[0];
    int mathmarks[5];
    mathmarks[0]=3333;
    cout<<"These are math marks:"<<endl;
    cout<<mathmarks[0]<<endl;
    //=======================================
    for(int i=0;i<4;i++)
    {
        cout<<"The value of marks:"<<i<<"::"<<marks[i]<<endl;
    }
    //pointers and array
    int *p=marks;
    cout<<"The value of marks[0] is,"<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"See you guys BYE"<<endl;
    return 0;
}