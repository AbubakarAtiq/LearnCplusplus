#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int main()
{
    int i=0;
    for(i=1;i<=10;i++)
    {

        cout<<"CopyRight:Abubakar Atiq"<<'\t'<<"Product Name:\n\tCube_Loop"<<endl;
        cout<<i<<'\t'<<endl;
        cout<<i*i<<'t'<<endl;
        cout<<i*i*i<<endl;
    }
    return 0;
}