#include<iostream>
using namespace std;
int c=45;//Global scope variable
int main()
{
    //int a,b,c;//local scope variable
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // cout<<"Enter the value of c:"<<endl;
    // cin>>c;
    // c=a+b;
    // cout<<c<<endl;
    // cout<<"Global c is"<<::c;
    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"The value of d is,"<<d<<endl<<"The value of e is,"<<e;
    // cout<<"The value of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The value of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The value of 34.4F is "<<sizeof(34.4F)<<endl;
    //  cout<<"The value of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The value of 34.4L is "<<sizeof(34.4L)<<endl;
    /*
        Build in Data Types
        float, double and long double Literal
        *********Reference variables***************
        float varia=555;
    float &y=varia;
    cout<<varia;
    cout<<y;
    */
    //*********Typecasting************Converting type of variable
    int a=45;
    float b=45.45;
    cout<<"The value of a is,"<<(float)a<<endl;
    cout<<"The value of a is,"<<float(a)<<endl;
    
    cout<<"The value of b is,"<<(int)b<<endl;
    cout<<"The value of b is,"<<int(b)<<endl;
    int c=int(b);
    cout<<"The expression is,"<<a+b<<endl;
    cout<<"The expression is,"<<a+int(b)<<endl;
    cout<<"The expression is,"<<a+(int)b<<endl;
    return 0;
}