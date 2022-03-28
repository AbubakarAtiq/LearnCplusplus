#include<iostream>
#include<string>
using namespace std;
void display()
	{
		string name("This is user accepted us, welcome");
		cout<<name<<endl;
	}
void USER()
	{
		string name1("/*******************************/");
		cout<<name1<<endl;
	}
int main()
{
	//local variable declaration
	//int x, y=11,var;
	/*
	if(y>=10)
	{
		var=30;
		cout<<"Condition true"<<","<<var<<endl;
	}
	else
	{
		var=40;
		cout<<"Condition not true,"<<var<<endl;
	}
	*******************************************/
	/*
	*******************
	x=(y<10)?30:40;
	cout<<"Value of x:"<<x<<endl;
	*******************
	*/
	
	string user_input;
	cout<<"Do you want to continue,y|n";
	getline(cin,user_input);
	if((user_input=="y")||(user_input=="Y")||(user_input=="yes")||(user_input=="YES"))
	{
		display();
	}
	else if((user_input=="n")||(user_input=="no")||(user_input=="N")||(user_input=="NO"))
	{
		USER();
	}
	else
	{
		cout<<"entered"<<endl;
	}
}