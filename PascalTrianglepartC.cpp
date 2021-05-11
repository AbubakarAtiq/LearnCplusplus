#include <iostream>
#include "pascalTriangle.h"
using namespace std;
int main()
{
    int n;
    PASCAL_TRIANGLE pascal;
    cout<<"Enter the number of rows:";
    cin>>n;
    pascal.genPascalsTriangle(n);
    pascal.InvertedPascalsTriangle(n);
    return 0;
}