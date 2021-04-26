#include<iostream>
#include<windows.h>
#include<string>
#include <system_error>
using namespace std;
int main()
{
    //what is a pointer?-->data type which holds the address of other
    //data type
    int a=3;
    int *b=&a;
    /*
        star variable b, which hold the value of a,
        &--> (address of)operator,
        *-->dereference operator
    */
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
    //*--->(value at) derefernce operator
    cout<<"The value at address b is "<<*b<<endl;
    //upload these to github
    return 0;
}