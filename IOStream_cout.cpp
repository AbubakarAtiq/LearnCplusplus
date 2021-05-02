#include<iostream>
#include <stdlib.h>
#include<string>
#include<iomanip>
#include <system_error>
//use instead of #include<windows.h>
using namespace std;
int main()
{
    string intro("\t2.1 cout\nThe standard output stream(cout)\nThe predefined object cout is an instance of ostream class. The cout object is said to be 'connected to' the standard output device,which usually is the display screen.\nMonitor<-cout{object}<-<<{insertion operator}<-variable{variable}.\nThe cout is used in conjunction with the strea insertion operator, which is written as << which are two less than signs as shown in the following example.\n#include<iostream>\nusing namespace std;\nint main()\n{\nchar str[]=''hello c++'';\ncout<<''value od str is:''<<str<<endl;\n}\nOUTPUT:\nValue of str is:Hello C++\nThe C++ compiler also determines the data type of variable to be output and selects the appropriate stream insertion operator to display the value.\nThe << operator is overloaded to output data items of built-in types integer,float,double,strings and pointer values.\n\nThe insertion operator << may be used more than once in a single statement as shown above and endl is used to add a new-line at the end of the line.");
    cout<<intro<<endl;
    system("pause");
    return 0;
}