#include<iostream>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
void spacebar(long n)
{
    cout<<"How many space bar you want to see?N:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"+--";
    }

}
int main()
{
    int n;
    for(int i=1;i<=5;i++)
    {
        cout<<"-";
    }
    spacebar(n);
    return 0;
}