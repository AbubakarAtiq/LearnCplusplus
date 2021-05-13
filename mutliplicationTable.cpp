#include<iostream>
#include<system_error>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(void){
	
	int i , j;
	int n;
    cout<<"Please Enter the table size:";cin>>n;
	//prints the columns
	printf("%4c X ",' ');
	for(i=1; i<=n; i++)
	  printf("%4d |", i);
      cout<<endl;
	  //printf("\n ");
	
	//Prints the Multiplication table
	for(i=1; i<=n; i++)
	  {   
	  	printf("%4d |",i); // prints the rows
	  	for(j=1; j<=n; j++)
	  	{
	  		printf("%4d", i*j); //  %4d for aligning the text on screen
	  	}
	  	printf("\n");
	  }
	
	system("pause");
}