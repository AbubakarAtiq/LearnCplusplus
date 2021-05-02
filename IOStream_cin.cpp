#include<iostream>
#include <stdlib.h>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int main()
{
    string intro("\t2.2 Cin\nThe standard Input stream(cin)\nThe predefined object cin is an instance of istream class. The cin object is said to be attached to the standard input device.which usually is the keyboard.\nKEYBOARD->cin{object}<->{extraction operator}>><->variable{variable}.\nThe cin is used in conjunction with the stream extraction operator,which is written as >> which are two greater than signs as shown in the following example:\n#include<iostream>\nusing namespace std;\nint main()\n{\nchar name[50];\ncout<<''please enter your name:'';\ncin>>name;\ncout<<''your name is:''<<name<<endl;\n}\nOUTPUT:\nPlease enter your name:Malik\nYour name is:Malik\nThe C++ compiler also determines the data type of the entered value and selects the appropriate stream extraction operator to extract the value and store it in the given variables.\n\nThe stream extraction operator >> may be used more than once in a single statement.\nTo request more than one datum you can use the following-\ncin>>name>>age;\nThis will be equivalent to the following two statements-\ncin>>name;\ncin>>age;");
    cout<<intro<<endl;
    system("pause");
    //main();if you use this it will restart the function.
    return 0;
}