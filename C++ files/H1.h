#include <iostream>
#include <string>
using namespace std;
class WelcomePage
{
    public:
    void f1()
    {
        cout<<"\tCreated by Abubakar Atiq"<<endl;
        string a;
        cout<<"What is your name:";
        getline(cin,a);
        cout<<"Welcome,"<<a<<",nice meeting you"<<endl;
        string a1;
        cout<<"Do you want to continue this program?(yes or no):";
        getline(cin,a1);
        if (a1=="yes"&&a1=="b") {
            cout<<"Program started again"<<endl;
            f1();
        }
        else if (a1=="YES")
        {
              cout<<"Program started again"<<endl;
            f1();
        }
        else if (a1=="y")
        {
              cout<<"Program started again"<<endl;
            f1();
        }
        else if (a1=="Y")
        {
              cout<<"Program started again"<<endl;
            f1();
            
        }
        else if (a1=="NO") {
        cout<<"Program is terminated,BYE BYE,"<<a<<endl;
        }
        else if (a1=="no") {
        cout<<"Program is terminated,BYE BYE,"<<a<<endl;
        }
        else if (a1=="n") {
        cout<<"Program is terminated,BYE BYE,"<<a<<endl;
        }
        else if (a1=="N") {
        cout<<"Program is terminated,BYE BYE,"<<a<<endl;
        }
    }

};