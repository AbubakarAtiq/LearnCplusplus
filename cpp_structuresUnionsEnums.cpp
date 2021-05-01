#include <exception>
#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
//structues used to combine different data types, remember
struct employee
{
    /*
        Typedef will change the property of this struct name,
        it will change the name employee to ep or anything you want.
    */
    /*Data*/
    int eID;
    char favChar;
    float salary;

};
union money
{
    /*
        unions are similar to struct but they provide better memory
        management.
    */
    /*Data*/
    int rice;
    char car;
    float pounds;

};
int main()
{
    /*
        enum is set of values.
        enumerations
    
    */
    enum example:unsigned char
    {
        a=5,b,t
        //by default it will increase the value of the intergers
        //of a=5, b=6,t=7

    };
    enum example eg;
    eg=b;
    std::cout <<eg << std::endl;
    enum meal{breakfast,lunch,dinner };
    meal m=breakfast;
    cout<<m<<endl;
    struct employee harry;
    harry.eID=1;
    harry.favChar='g';
    harry.salary=4545.5555;
    cout<<harry.salary<<endl;
    cout<<harry.eID<<endl;
    cout<<harry.favChar<<endl;
    union money i;
    i.car='h';
    i.pounds=656565;
    i.rice=1;
    cout<<i.rice<<endl;
    cout<<i.car<<endl;
    std::cout <<i.pounds << std::endl;
    return 0;
}