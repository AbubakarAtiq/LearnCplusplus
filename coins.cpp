#include<iostream>
#include <stdlib.h>
#include<windows.h>
#include<string>
#include <system_error>
using namespace std;
int main()
{
    system("echo Welcome to snack video Rupee per coins calculator Program");
    system("echo Made by abubakar atiq-217-24481");
    double x;//store the value of coins enter
    double y=0.0002;
    double output;
    cout<<"Remember 50coins are equal to 0.001Rs"<<endl;
    cout<<"Enter-number-of-coins-earned:";
    cin>>x;
        /*
            x=50->0.01Rs
            x=100->0.02Rs
            50Coins=0.01Rs
            1coins=0.01Rs/50
            1coins=0.0002Rs
            x-coins=x*0.0002Rs
        */
    output=x*y;
    cout<<"This is the amount you will receive, when you have these number of coins,"<<x<<endl;
    cout<<"This is the amount in Rs/coin:"<<output<<endl;
    main();
    return 0;
}