#include<iostream>
#include<string>
#include <system_error>
using namespace std;
int main()
{
    //what is a pointer?-->data type which holds the address of other
    //data type
    int a=3;
    int *b=&a;
    b=&a;
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
    //pointer to pointer
    int **c =&b;
    cout<<"The address of b is,"<<&b<<endl;
    cout<<"The address of b is,"<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    return 0;
}