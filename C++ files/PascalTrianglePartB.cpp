/**
 * @file PascalTrianglePartB.cpp
 * @author Mirza
 *@brief (3.b): Usea“for loops”to print the invert of theabovepascal triangle.
  The program shouldtakethenumber of rows as input from the user.
  The output of the program should be as in the followingpatterne.g., if you enter the number of rows = 8
 * @version 0.1
 * @date 2021-05-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<iostream>
#include<iomanip>
using namespace std;
long fact(long n){
   int i, fact = 1;
   for(i = n; i>1; i--)
      fact *= i;
   return fact;//factorial of given number
}
long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--)
      nume *= i;
   return long(nume/fact(n-r));//generate result of nCr
}
void genPascalsTriangle(long n){
   for(int i = n; i>=1; i--){
      for(int j = 0; j<n-i; j++)
         cout <</*setw(3)*/" ";//printing space to show triangular form
      for(int j =(2-i);j<(2-i)+(2*i-1); j++)
         cout <</*setw(3)*/nCr(i, j) <</*setw(3)*/" ";
      cout << endl;
   }
}
int main() {
    int n;
    cout<<"Enter the number of rows:";cin>>n;
    genPascalsTriangle(n);
    main();
    return 0;
}