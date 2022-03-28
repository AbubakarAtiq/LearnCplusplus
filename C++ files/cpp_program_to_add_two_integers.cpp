/*C++ Program to add two numbers*/
#include<iostream>
using namespace std;
int main()
{
	string Hello("Hello, World!");
	int first_number,second_number,sum_of_two_numbers;
	cout<<Hello<<endl;
	cout<<"Enter two integers with space in between,e.g.4 4:";
	cin>>first_number>>second_number;
	sum_of_two_numbers=first_number+second_number;
	cout<<first_number<<"+"<<second_number<<"="<<sum_of_two_numbers<<endl;
	system("pause");
}