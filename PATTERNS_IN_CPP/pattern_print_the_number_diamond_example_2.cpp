/*
	*Example:2
	Program in C++ to print the number diamond
In the following program, the user can provide the number of rows to
print the diamond pattern as he wants, the result will be displayed on
the screen:
code is as follow:
*/
#include<iostream>
using namespace std;
class TRIANGLES
{
public:
int n,x,y,k;
void Normal_Triangle(int n)
{
		for(x=1;x<=n;x++)
	{
		for(y=x;y<n;y++)
		{
			cout<<" ";
		}
		for(k=1;k<(x*2);k++)
		{
			cout<<k;
		}
		cout<<"\n";
	}
}
void Inverse_Triangle(int n)
{
	for(x=1;x>=1;x--)
	{
		for(y=n;y>x;y--)
		{
			cout<<" ";
		}
		for(k=1;k<(x*2);k++)
		{
			cout<<k;
		}
		cout<<"\n";
	}	
}
};
int main()
{	
	int n;
	cout<<"Enter the number of rows to show number pattern:";
	cin>>n;
	TRIANGLES tri;
	tri.Normal_Triangle(n);
	tri.Inverse_Triangle(n);
	system("pause");
	main();
}