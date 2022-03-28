// C++ program to find factorial of a given number
#include<iostream>
using namespace std;
int main()
{
	int n;
long double factorial=1.0;
cout<<"Enter a positive integer:";
cin>>n;
if(n<0)
cout<<"Error!factorial of a negative no doesnt exist.";
else
{
for(int i=1;i<=n;++i)
{
factorial*=i;
cout<<"factorial of,"<<n<<"="<<factorial<<endl;
}
}
main();
}
