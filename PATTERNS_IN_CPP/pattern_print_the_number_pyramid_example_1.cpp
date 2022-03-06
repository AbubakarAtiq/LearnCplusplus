/*
	*Example:1
	Program in C++ to print the number pyramid
->In this following program, the user can provide the number
of rows to print the number pyramid pattern as he wants, the
result will be displayed on the screen:
Code is as follow:
*/
#include<iostream>
using namespace std;
int main()
{
	int n,x,y,k;
	cout<<"Enter the number of rows to show number pattern:";cin>>n;
	for(x=1;x<n;x++)
	{
		for(y=1;y<=n;y++)
		{
			if(y<=x)
			{
				cout<<y;
			}
			else
			{
				cout<<" ";
			}
		}
		for(y=n;y>=1;y--)
		{
			if(y<=x)
			{
				cout<<y;
			}
			else
			{
				cout<<" ";
			}
			cout<<"\n";
		}
	}
	system("pause");
	main();
}