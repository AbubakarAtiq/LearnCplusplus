/*c++ program to find quotient and remainder*/
#include<iostream>
using namespace std;
int main()
{
	string Hello("Hello, World!"),Restart("Program restarted again");
	cout<<Hello<<endl;
	int divisor,dividend,quotient,remainder;
	cout<<"Enter dividend value:";cin>>dividend;
	cout<<"Enter divisor value:";cin>>divisor;
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	cout<<"Quotient="<<quotient<<endl;
	cout<<"Remainder="<<remainder<<endl;
	system("pause");cout<<Restart<<endl;
	main();
}