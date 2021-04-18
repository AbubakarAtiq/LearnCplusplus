#include <iostream>
/*
    Header file,each file have different function.
*/
using namespace std;
void sum()
{
    int a=5;
    cout<<a<<endl;
}
int main()
{
    int a=4,b=5;
    char c='u';//contain only characters
    cout<<"i am "<<a<<b<<"Good to know that"<<endl;
    cout<<"this is char c value,"<<c<<endl;
    char e='r';//it will show unexcepted result
    cout<<"this is char e value,"<<e<<endl;
    sum();
    return 0;
}