#include <algorithm>
#include <cmath>
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double m;
    double a;
    double b;
    double c;
    cout<<"Enter a range of all sides:";cin>>m;
    a=m*m-1;
    b=m+m;
    c=m*m+1;
    cout<<"So, the pythagorean triples are as follow:"<<endl;
    cout<<"a side:"<<a<<endl;
    cout<<"b side:"<<b<<endl;
    cout<<"c side:"<<c<<endl;
    //cout<<"Where square root of c side is:"<<sqrt(c*c)<<endl;
    cout<<"Data is as follow"<<endl;
    cout<<"a side"<<"\t"<<"b side"<<"\t"<<"c side"<<endl;
    cout<<setw(4)<<a<<setw(7)<<b<<setw(9)<<c<<endl;
    cout<<"\tThe total range is "<<m<<endl;
    cout<<"Hypotenuse c is square root of a^2+b^2"<<endl;
    c=sqrt(a*a+b*b);
    cout<<"Hypotenuse c is "<<c<<endl;
    //range is m
    /*
        a=m^2-1
        b=2m
        c=m^2+1
        m is any natural number.
        from this we will be able to find the pythagorean triple
        then use it to find the hypotenuse
    */
 
    // int side1 = 0;
    // int side2 = 0;
    // int Hypotenuse = 0;

    // cout << "hypotenuse" << setw(10) << "Side1" << setw(10) << "Side2" << endl;

    // for(int i=1;i<=500;i++)
    // {
    //     side1++;
    //     //cout << side1 << endl;

    //     for(int a=1;a<=500;a++)
    //     {
    //         side2++;
    //         //cout << "side 2 " << side2 << endl;

    //         for(int c=1;c<=500;c++)
    //         {
    //             Hypotenuse++;
    //             int HypotenuseSqr = Hypotenuse*Hypotenuse;
    //             int side1Sqr = side1*side1;
    //             int side2Sqr = side2*side2;

    //             if(HypotenuseSqr == side1Sqr+side2Sqr)
    //             {
    //                 cout << HypotenuseSqr << setw(15) << side1 << setw(10) << side2 << endl;
    //              }


    //         }
    //     }
    // }   
}