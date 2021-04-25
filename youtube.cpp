#include<iostream>
#include <iomanip>
#include<string>
#include "testheader.h"
#include <Windows.h>
#include <system_error>
using namespace std;
int main()
{
    // string abubakar_intro("\n c is this");
    // string abubakar_name("\na is name");
    // int b=3,c=5;
    // string a("\tWell good to know that");
    // cout<<"As you can see,abubakar_intro is:"<<setw(5)<<abubakar_intro<<endl;
    // cout<<"Name of abubakar is:"<<setw(11)<<abubakar_name<<endl;
    // cout<<"a"<<setw(5)<<a<<endl;
    // cout<<"b"<<setw(5)<<b<<endl;
    // cout<<"c"<<setw(5)<<c<<endl;
    // Introduction_to_header ITH;//object created from class
    // ITH.DisplayMessage();
    // cout<<"\tWelcome to 404"<<endl;
    // ITH.DisplayMessage();
    // string info("1.Location\t\t\t2.Time\n----------\t\t\t-------");
    // int a=404,b=404;
    // cout<<info<<endl;
    // system("time");
    /*
        Add exe of this cpp file to system variable paths
    */
    system("echo AbuBakar Atiq PVT Limited");
    system("echo (c)All rights reserved. 2021");
    cout<<"Do you want to open Youtube?{Y|N}:";
    string useryesorno;
    getline(cin,useryesorno);
    if((useryesorno=="YES")||(useryesorno=="yes")||(useryesorno=="y")||(useryesorno=="Y"))
    {
        system("start www.youtube.com");
        system("pause");
    }
    else if ((useryesorno=="Y")||(useryesorno=="y")) {
        system("start www.youtube.com");
        system("pause");
    }
    else if((useryesorno=="NO")||(useryesorno=="no"))
    {
        cout<<"\tAs you wish,program terminated"<<endl;
        system("pause");
    }
    else if((useryesorno=="N")||(useryesorno=="n"))
    {
        cout<<"\tAs you wish,program terminated"<<endl;
        system("pause");
    }
    main();

} 