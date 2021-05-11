#include <iostream>
#include "pascalTriangle.h"
using namespace std;
int main()
{
    int n;
    PASCAL_TRIANGLE pascal;
    cout<<"Enter the number of rows:";
    cin>>n;
    pascal.InvertedPascalsTriangle(n);
    pascal.genPascalsTriangle(n);
    return 0;
}