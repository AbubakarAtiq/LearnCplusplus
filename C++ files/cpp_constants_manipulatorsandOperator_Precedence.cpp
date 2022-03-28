#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//     const int a=3;
//     cout<<"The value of a was: "<<a;
//    // a=45; //cannot be changed
/*
    we can use iomanip for setw() function. It will help us.
*/
int a=3,b=34,c=44444;
cout<<"The value of a without setw is:"<<a<<endl;
cout<<"The value of b without setw is:"<<b<<endl;
cout<<"The value of c without setw is:"<<c<<endl;

cout<<"The value of a without setw is:"<<setw(4)<<a<<endl;
cout<<"The value of b without setw is:"<<setw(4)<<b<<endl;
cout<<"The value of c without setw is:"<<setw(4)<<c<<endl;
    return 0;
}