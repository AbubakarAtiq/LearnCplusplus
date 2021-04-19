#include <iostream>
/*
    There are two types of header files
    1.System header files: It comes with the compiler.
    2.User defined header files: It is written by the programmer.

*/
//#include "a.h"-->This will produce an error if a.h is not present in the directory.
/*
    You can use this website for cpp reference.
    https://en.cppreference.com/w/
*/
using namespace std;
int main()
{
    cout<<"This is Abubakar Atiq";
    //operators in C++, typing endl will provide new line or /n
    //Arithmetic operators. +,-,*,/,%,++a,--a,a++,a--
    int a=4,b=5;
    cout<<"The value of a+b is,"<<a+b<<endl;
    cout<<"The value of a-b is,"<<a-b<<endl;
    cout<<"The value of a*b is,"<<a*b<<endl;
    cout<<"The value of a/b is,"<<a/b<<endl;
    cout<<"The value of a%b is,"<<a%b<<endl;
    cout<<"The value a increment before print is,"<<++a<<endl;
    cout<<"The value a decrement before print is,"<<--a<<endl;
    cout<<"The value a increment after print is,"<<a++<<endl;
    cout<<"The value a decrement after print is,"<<a--<<endl;
    //Assignment operators
    /*
        int a=3,b=9;
        char d='d';
    */
    //Comparison operators
    cout<<"Following are the comparsion operator:"<<endl;
    cout<<"The value of a==b is,"<<(a==b)<<endl;
    cout<<"The value of a!=b is,"<<(a!=b)<<endl;
    cout<<"The value of a>b is,"<<(a>b)<<endl;
    cout<<"The value of a<b is,"<<(a<b)<<endl;
    cout<<"The value of a>=b is,"<<(a>=b)<<endl;
    cout<<"The value of a<=b is,"<<(a<=b)<<endl;
    //Logical Operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of ((a==b)&&(a<b)) logical operator is,"<<((a==b)&&(a<b))<<endl;
    cout<<"The value of logical operator is,"<<((a==b)||(a<b))<<endl;
    cout<<"The value of logical operator is,"<<(!(a==b))<<endl;
    return 0;
}