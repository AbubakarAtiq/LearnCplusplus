#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    //https://www.youtube.com/watch?v=JRKs3s15Kjc&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=18
    //recursive is calling a function.
    //factorial of a number
    //n!=n*(n-1)!
    int a;
    cout<<"Enter a number:";cin>>a;
    // cout<<"The factorial of a is,"<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position,"<<a<<"is"<<fib(a)<<endl;
    return 0;
}