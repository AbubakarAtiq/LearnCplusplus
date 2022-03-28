#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
//Function prototype
//type function-name (arguments);
//int sum(int a, int b);-->Acceptable
//int sum(int a,b);//-->Not acceptable
//int sum (int,int);-->acceptable
/*
    there is no need to mention int a int b because they are not
    our actual arguments.
*/
int sum(int,int);
void greeting(void);
int main()
{
    greeting();
    int num1, num2;
    cout<<"Enter first number"<<endl;cin>>num1;
    cout<<"Enter second number"<<endl;cin>>num2;
    cout<<"the sum is"<<sum(num1,num2);
    //num1 and num2 are actual parameters
    return 0;
}
int sum(int a, int b)
{
    //formal parameter
    //a and b will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}
void greeting(){
    cout<<"Welcome,";
}
/*
    if you put int sum() after main then it will show the error.
    function prototypes: tell the compiler that which function is 
    going to use.
*/