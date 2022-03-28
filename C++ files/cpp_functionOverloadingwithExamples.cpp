/*
    Basically, function overloading means is that, we can use
    same function name with different parameters or arguments.
    source of this file:
    https://www.youtube.com/watch?v=8qZb09suSHY&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=19
    
*/
#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int sum(int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

int main()
{
    cout<<"The sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is"<<sum(3,7,6)<<endl;
    return 0;
}