//https://www.youtube.com/watch?v=d363dW0AeS8&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=22
#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
class binary{
    //be default everything is private
        string s;
        public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
    };
void binary::read(void){
    cout<<"Enter a binary number;";
    cin>>s;
}
void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }

}
void binary ::display(void)
{
    cout<<"Display your binary number"<<endl;
     for(int i=0;i<s.length();i++)
     {
         cout<<s.at(i);
     }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();  
    b.ones_compliment();
    b.display();
    return 0;
}
    //oops - Classes and objects
    //C++ --> initially called --> C with classes by stroustroup
    //class-->extension of structures (in C)
    //structures had limitations-->membbers are public-->>no methods
    /*
    classes-->structures+more
    classes--> can have methods and properties
    classes --> can make few members as private and few as public
    structures in C++ are typedefed
    you can declare objects along with the class declartion
    */
    /*
    class Employee{
        //class definition
    }harry,rohan,lovish;*/
    //harry.salary=8 makes no sense if salary is private
    /*
    nesting of member functions
    you can call another function without using dot
    */