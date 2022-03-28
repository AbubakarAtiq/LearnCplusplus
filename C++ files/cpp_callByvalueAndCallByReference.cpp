#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
// //this will not swap
// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
//call by reference by pointer
// void swappointer(int *a, int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
void SwapReferenceVar(int &a, int &b)
{
    int temp =a;//  4   5   5
    a=b;//          4   5   5
    b=temp;//       4   5   4
}
int main()
{
    int x=4, y=5;
    //cout<<"The sum of 4 and 5 is,"<<sum(4,5)<<endl;
    cout<<"The value of x is,"<<x<<"and the value of y is,"<<y<<endl;
    //swappointer(&x,&y); will work
    SwapReferenceVar(x,y);
    cout<<"The value of x is,"<<x<<"and the value of y is,"<<y<<endl;
    //this will not work swap(a,b);
    return 0;
}