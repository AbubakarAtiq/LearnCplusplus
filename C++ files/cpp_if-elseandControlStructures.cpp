#include <iostream>
using namespace std;
int main()
{
    //how to structure a program.
    cout<<"\t============{}========"<<endl;
   /* 
        below code represent, selection control structure:If else-if else ladder
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    if(age<18)
    {
        cout<<"You are invited"<<endl;
    }
    else if (age==18) {
        cout<<"You are not invited"<<endl;
    }
    */
    /*
        below code represent, selection control structure: switch case statements
    */
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    switch (age) 
    {
        /*
            if you didnt mentioned break, then all cases will be printed out.
            it will help you to write complex code.
        */
    case 18:
    cout<<"You are 18";
    break;
    case 22:
    cout<<"you are 22"<<endl;
    case 2:
    cout<<"you typed 2"<<endl;
    default:
    cout<<"No special cases"<<endl;
    break;
    }
    return 0;
}