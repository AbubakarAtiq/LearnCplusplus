#include <iostream>
using namespace std;
int main()
{
    /*check txt file for more info*/
    // int i=1;
    // cout<<i;
    // i++;
    // for (int i=0; i<4; i++) 
    // {
    //     /*
    //         syntax for for loop
    //         for(initialization;condition;updation)
    //         {
    //             loop body(c++ code)
    //         }
    //     */
    //     cout<<i<<endl;
    // }
    //example of infinite loop
    // for(int i=1;34<=40;i++)
    // {
    //     cout<<i<<endl;
    // }
    /*
        While loop in C++:
        syntax:
        while(condition):
        {
            c++ statments;
        }
        printing 1 to 40 using while loop
    */
    // int i=1;
    // while (i<=40)
    // {
    // std::cout << i << std::endl;
    // i++;
    // }
    //example of infinite while loop
    // int i=1;
    // while(true)
    // {
    //     std::cout << i << std::endl;
    //     i++;
    // }
    /*
    do while code
    syntax
    do
    {
        c++ statement;
    }while(condition);
    */
    int i=1;
    do {
    cout<<i<<endl;
    i++;
    }while (i<=40);
    return 0;
}