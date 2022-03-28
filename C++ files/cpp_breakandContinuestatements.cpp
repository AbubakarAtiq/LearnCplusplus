#include <string>
#include<iostream>
#include <Windows.h>
#include <system_error>
using namespace std;
int main()
{
    system("echo Hello");
    for (int i=0;i<40;i++) {
    cout<<"i"<<endl;
    if(i==2)
    {
        break;
        /*
            It will break the loop when i reach 2.
        */
    }
    }
    return 0;
}