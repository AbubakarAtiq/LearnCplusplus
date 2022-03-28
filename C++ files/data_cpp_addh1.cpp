#include<iostream>
#include"add1.h"
/*header file will add functions to main-file*/
using namespace std;
int main()
{
    cout<<"\tProgram Created by Abubakar Atiq,18th April,2021"<<endl;
    Welcome mywelcome;//object created for welcome
    /*Remember the class name before making its object*/
    mywelcome.Introduction();
    mywelcome.displayMessage();
    main();

}
