#include<iostream>
using namespace std;
#define deb(x) cout <<#x<<"="<<x<<endl;//it will show the variable value
// template<typename... T>
// void read(T...args)
// {
//     cin>>args;
// }
int main()
{
    int x(100),y(200);
    deb(x);deb(y);
    cout<<x<<endl;cout<<y<<endl;
    return 0;
}