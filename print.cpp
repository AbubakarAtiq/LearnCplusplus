#include<iostream>
#include <iterator>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
void dash_bar()
{
  int a;
  cout<<"Enter no of bar:";cin>>a;
  for(int a;a>=0;a=5)
  {
    cout<<"-"<<endl;
  }
}
int main()
{
  dash_bar();

  return 0;
}