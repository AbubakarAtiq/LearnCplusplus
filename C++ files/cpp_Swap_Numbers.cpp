/*Swap Numbers (Using Temporary Variable*/
#include<iostream>
using namespace std;
int main()
{
	string Hello("Hello, World!");
	cout<<Hello<<endl;
	int a=5,b=10,temp;
	cout<<"Before swapping."<<endl;
	cout<<"a="<<a<<",b"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter swapping."<<endl;
	cout<<"a="<<a<<",b"<<b<<endl;
	system("pause");
}