/*C++ Program to Find largest number among three numbers*/
#include<iostream>
using namespace std;
int main()
{
	string Hello("Hello, World!"),Name("PROGRAM FOR FINDING LARGEST NUMBER"),PS("\n\n\t********************************************");
	cout<<Hello<<endl<<Name<<endl;
	double number_one,number_two,number_three;
	cout<<"Enter 1st Number:"<<number_one;
	cin>>number_one;
	cout<<"Enter 2nd Number:"<<number_two;
	cin>>number_two;
	cout<<"Enter 3rd Number:";
	cin>>number_three;
	if(number_one>=number_two&&number_one>=number_three)
	{
		cout<<"Largest number:"<<number_one;
	}
	else if(number_two>=number_one&&number_two>=number_three)
	{
		cout<<"Largest number:"<<number_two;
	}
	else if(number_three>=number_one&&number_three>=number_two)
	{
		cout<<"Largest  number:"<<number_three;
	}
	cout<<PS<<endl;
	system("pause");
}