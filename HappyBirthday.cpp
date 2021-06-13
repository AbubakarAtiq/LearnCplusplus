#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int main()
{
    for(;;)
    {
		string user;
		cout << "enter your name";
		getline(cin, user);
        system("color 02");
        cout<<"\t\tHappy Birthday:Hasan Bhai"<<endl;
        system("color 03");
        system("color 04");
        system("color 05");
        system("color 06");
        system("color 07");
    }
    return 0;
}