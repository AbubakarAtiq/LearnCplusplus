#include <iostream>
using namespace std;
int main()
{
    int r,c,k,m;
    cout<<"Enter the number of inverted lines:";
    cin>>m;
    for(r=0;r<=m-1;r++)//r=i
    {
        for(k=0;k<=r;k++)//j
        {
            cout<<"";
        }
        for(c=1;c<=m-r;c++)//condition,m=n
        {
            cout<<c;
        }
    }
    return 0;
}