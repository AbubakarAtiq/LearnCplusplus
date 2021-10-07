#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
/*
https://www.youtube.com/watch?v=aKnc1A5NOKo&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=25
tut25.cpp
*/
using namespace std;
class Employee
{
    //by defaut it is private
    int id;
    int salary;
    public:
    void setId(void)
    {
        salary=122;
        cout<<"Enter the id of employee:";
        cin>>id;
    }
    void getId(void)
    {
        cout<<"The Id of this employee is:"<<id<<endl;
    }
};
int main()
{
    system("echo https://github.com/AbubakarAtiq");
    /*Employee ab, cd, ef, gh;
    ab.setId();
    ab.getId();
    */
    Employee fb[4];
    for (int i=0;i<4;i++)//it will run 4 times
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}