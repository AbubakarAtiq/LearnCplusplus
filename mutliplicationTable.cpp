/**
 * @file Tabular Multiplication.cpp
    @AbubakarAtiq
 * @brief 
    Write a C++ program by using a for loop to print a tabular multiplication
    as given below. The program should ask the user for the size of the table
    and then perform the table multiplication accordingly. You can use the setw manipulator
    to adjust the proper setting of numbers in the table.
 * @version 0.1
 * @date 2021-05-13
 * @Help:
    How i can make program look like this?
    Please enter the table size:10
            1   2   3   4   5   6   7   8   9   10
        +-----------------------------------------
    1   |   1   2   3   4   5   6   7   8   9   10
    2   |   2   4   6   8   10  12  14  16  18  20
    and soon on. 
 * @copyright Copyright (c) 2021
 * 
 */
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
	printf("%c x  |",' ');
	for(i=1; i<=n; i++)
	printf("%4d ", i);
     
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