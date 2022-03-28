/*CHECK whether number is even or odd using if else*/
#include<iostream>
using namespace std;
int main()
{
	string Hello("Hello, World!");
	cout<<Hello<<endl;
	int n;
	cout<<"Enter an integer";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<",is even";
	}
	else
		cout<<n<<",is odd"<<endl;
	system("pause");
}