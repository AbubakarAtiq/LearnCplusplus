#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
//https://www.youtube.com/watch?v=oVvvwEx-gBw&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=17
using namespace std;
inline long product(long a, long b)
{
    return a*b;
}
float moneyreceived(double currentmoney, float factor=1.04)
{
    return currentmoney*factor;


}
int main()
{
    /*
        make those function inline those who few lines of code.
        do not use with static variable.
        on left compulsory arguments should be in extreme left and default argument should be on right.
    */
    int a,b;
    cout<<"Enter valie of a and b";cin>>a>>b;
    cout<<"The product of a and b is"<<product(a,b);
    int money=934;
    cout<<"if you have"<<moneyreceived(money,1.1)<<"rs after 1 year"<<endl;
    return 0;
}