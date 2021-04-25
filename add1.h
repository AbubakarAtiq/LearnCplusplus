#include<iostream>
#include<string>
#include<windows.h>
#include <iomanip>
using namespace std;
class Welcome
{
public:
    void Introduction()
    {
    std::cout<<"Hello, Welcome to  C++ Tutorials"<<std::endl;
    }
    void displayMessage()
    {
        string a;
        std::cout<<"        Type your name here(name:)";
        getline(cin,a);
        cout<<"Welcome,"<<a<<",Nice to see you here"<<endl;
        string b;
        cout<<"Tell me why are you here:";
        getline(cin,b);
        cout<<"I see,"<<a<<",I will try to my best to give you overview of C++"<<endl;
       /* cout<<"After the next pause, I'll open that folder I which you save my file"<<endl;
        cout<<"YOu can type dir to see folders in it"<<endl;*/
        /*system("pause");
        system("cmd start /i");
        cout<<"I hope you like it,"<<a<<endl;k*/
        //system("start www.youtube.com");
        string yesapproval;
        cout<<"Would you like to see,C++ Overview,Type(Y/N)?:";
        getline(cin,yesapproval);
        if((yesapproval=="Y")||(yesapproval=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Overview}-------------------------------------------\t\t\t"<<endl;
        string Intro("What is C++,C++ is an object-oriented programming language. It is an extension to C programming,");
        string Intro1("Our C++ tutorial includes all topics of C++ such as first example,control statements,objects \nand classes,inheritance,constructor,destructor,this,static,polymorphism,abstraction,abstract class,interface,namespace,encapsulation,arrays,strings,expression handling,File IO,etc.");
        cout<<Intro<<Intro1<<endl;
        }
        else if ((yesapproval=="YES")||(yesapproval=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Overview}-------------------------------------------\t\t\t"<<endl;
        string Intro("What is C++,C++ is an object-oriented programming language. It is an extension to C programming,");
        string Intro1("Our C++ tutorial includes all topics of C++ such as first example,control statements,objects \nand classes,inheritance,constructor,destructor,this,static,polymorphism,abstraction,abstract class,interface,namespace,encapsulation,arrays,strings,expression handling,File IO,etc.");
        cout<<Intro<<Intro1<<endl;
        }
        else if ((yesapproval=="no")||(yesapproval=="NO"))
        {
            cout<<"Ok,Let's begin,with What is C++?"<<endl;
        }
        else if ((yesapproval=="n")||(yesapproval=="N"))
        {
              cout<<"Ok,Let's begin,with What is C++?"<<endl;
        }
        string user_say;
        cout<<"Will you like to learn What is C++?,(Y|N):";
        getline(cin,user_say);
        if((user_say=="Y")||(user_say=="y"))
        {
            string intro1("C++ is a general purpose,case-sensitive,free-form programming language that supports object-oriented,procedural and generic programming.C++ is a middle-level language,as it encapsulates both high and low level language features.");
        cout<<"\t\t\t -------------------------------------------{What is C++}-------------------------------------------\t\t\t"<<endl;
        cout<<intro1<<endl;
        system("pause");
        string intro2("C++ supports the object-oriented programming,the four major pillar of object oriented programming used in C++ are:");
        string intro3("\n1.Inheritance\n2.Polymorphism\n3.Encapsulation\n4.Abstraction");
        }
        else if((user_say=="YES")||(user_say=="yes"))
        {
            string intro1("C++ is a general purpose,case-sensitive,free-form programming language that supports object-oriented,procedural and generic programming.C++ is a middle-level language,as it encapsulates both high and low level language features.");
        cout<<"\t\t\t -------------------------------------------{What is C++}-------------------------------------------\t\t\t"<<endl;
        cout<<intro1<<endl;
        system("pause");
        }
        else if((user_say=="Y")||(user_say=="y"))
        {
        string intro1("C++ is a general purpose,case-sensitive,free-form programming language that supports object-oriented,procedural and generic programming.C++ is a middle-level language,as it encapsulates both high and low level language features.");
        cout<<"\t\t\t -------------------------------------------{What is C++}-------------------------------------------\t\t\t"<<endl;
        cout<<intro1<<endl;
        system("pause");
        }
        else if((user_say=="no")||(user_say=="NO"))
        {
            cout<<"Jumping to"<<setw(5)<<",topic"<<endl;
        }
        else if((user_say=="n")||(user_say=="N"))
        {
            cout<<"Jumping to"<<setw(5)<<",topic"<<endl;
        }
        string intro2("C++ supports the object-oriented programming,the four major pillar of object oriented programming used in C++ are:");
        string intro3("\n1.Inheritance\n2.Polymorphism\n3.Encapsulation\n4.Abstraction");
        string yesapproval1;
        cout<<"Would you like to see Object-Oriented Programming(OOPs),Type(Y/N):";
        getline(cin,yesapproval1);
        if((yesapproval1=="Y")||(yesapproval=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{Object-Oriented Programming (OOPs)}-------------------------------------------\t\t\t"<<endl;
        cout<<intro2<<intro3<<endl;
        system("pause");
        }
        else if ((yesapproval1=="yes")||(yesapproval=="YES"))
        {
             cout<<"\t\t\t -------------------------------------------{Object-Oriented Programming (OOPs)}-------------------------------------------\t\t\t"<<endl;
        cout<<intro2<<intro3<<endl;
        system("pause");
        }
        else if((yesapproval1=="N")||(yesapproval=="n"))
        {
            cout<<"Jumping to next topic"<<endl;
        }
        else if((yesapproval1=="no")||(yesapproval1=="NO"))
        {
             cout<<"Jumping to next topic"<<endl;
        }
        string stlibraries("Standard C++ programming is divided into three important parts:");
        string stlibraries1("\n->The core library includes the data types, variables and literals,etc.\n->The standard library includes the set of functions manipulating strings,files,etc.\n->The Standard Template Library (STL)includes the set of methods manipulating a data structures.");
        string yesapproval2;
        cout<<"Would you like to see C++ Standard Libraries?,Type(Y/N),";
        getline(cin,yesapproval2);
        if((yesapproval2=="Y")||(yesapproval2=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Standard Libraries}-------------------------------------------\t\t\t"<<endl;
        cout<<stlibraries<<stlibraries1<<endl;
        system("pause");
        }
        else if((yesapproval2=="YES")||(yesapproval2=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Standard Libraries}-------------------------------------------\t\t\t"<<endl;
        cout<<stlibraries<<stlibraries1<<endl;
        system("pause");
        }
        else if((yesapproval2=="N")||(yesapproval2=="n"))
        {
            cout<<endl;
        }
        else if((yesapproval2=="NO")||(yesapproval2=="no"))
        {
            cout<<endl;
        }
        string usageofcpp("By the help of C++ programming language,we can develop different types of secured and robust applications:\n1.Windows application\n2.Client-Server application\n3.Device drivers\n4.Embedded firmware,etc.");
        string yesapproval3;
        cout<<"Would you like to see usage of C++?,Type(Y/N):";
        getline(cin,yesapproval3);
        if((yesapproval3=="Y")||(yesapproval3=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{Usage of C++}-------------------------------------------\t\t\t"<<endl;
        string usageofcpp("By the help of C++ programming language,we can develop different types of secured and robust applications:\n1.Windows application\n2.Client-Server application\n3.Device drivers\n4.Embedded firmware,etc.");
        cout<<usageofcpp<<endl;
        system("pause");
        }
        else if((yesapproval3=="YES")||(yesapproval3=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{Usage of C++}-------------------------------------------\t\t\t"<<endl;
        string usageofcpp("By the help of C++ programming language,we can develop different types of secured and robust applications:\n1.Windows application\n2.Client-Server application\n3.Device drivers\n4.Embedded firmware,etc.");
        cout<<usageofcpp<<endl;
        system("pause");
        }
        else if((yesapproval3=="y")||(yesapproval3=="Y"))
        {
            cout<<"\t\t\t -------------------------------------------{Usage of C++}-------------------------------------------\t\t\t"<<endl;
        string usageofcpp("By the help of C++ programming language,we can develop different types of secured and robust applications:\n1.Windows application\n2.Client-Server application\n3.Device drivers\n4.Embedded firmware,etc.");
        cout<<usageofcpp<<endl;
        system("pause");
        }
        else if((yesapproval3=="NO")||(yesapproval3=="no"))
        {
            string a;
            cout<<"As you wish,"<<a<<endl;
        }
        string Cdiffer("1.follows the procedural style programming and C++ is multi-paradigm.It supports both procedural and object oriented.\n2.Data is C++,you can use modifiers for class members to make it inaccessible for outside users.\n3.C follows the top-down approach and C++ follows the bottom-up approach.\n4.Support function overloading and C++ supports function overloading.\n5.In C,you can't use structure and In C++,you can use functions in structure.\n6.C does not support reference variables and C++ supports reference variables.\n7.In C,scanf() and  printf() are mainly used for input/output and C++ mainly uses stream cin and cout to perform input and ouput operations.\n8.Operator overloading is not possible in C and Operator overloading is possible in C++.\n9.C programs are divided into procedures and modules and C++ programs are divided into functions and classes.\n10.C does not provide the feature of namespace and C++ supports the feature of namespace.\n11.Exception handling is not easy in C.It has to perform using other functions and C++ provides exception handling using Try and Catch block.");
        string yesapproval4;
        cout<<"Would you like to open C VS C++ string?Type(Y|N):";
        getline(cin,yesapproval4);
        if((yesapproval1=="Y")||(yesapproval1=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C Vs C++}-------------------------------------------\t\t\t"<<endl;
        cout<<Cdiffer<<endl;
        }
        else if((yesapproval4=="YES")||(yesapproval4=="yes"))
        {
        cout<<"\t\t\t -------------------------------------------{C Vs C++}-------------------------------------------\t\t\t"<<endl;
        cout<<Cdiffer<<endl;
        }
        else if((yesapproval4=="N")||(yesapproval4=="n"))
        {
            cout<<endl;
        }
        else if((yesapproval4=="NO")||(yesapproval4=="no"))
        {
             cout<<endl;
        }
        string cpphistory("History of C++ language is interesting to know.Here we are going to discuss brief history of C++ language.\nC++ programming was developed in 1980 by Bjarne Stroustrup at bell laboratories of AT&T (American Telephone & Telegraph) located in USA.\nBjarne Stroustrup is known as the founder of C++ language.\nIt was develop for adding a feature of OOP(Object Oriented Programming)in C without significantly changing the C component.\nC++ programming is'relative'(called a superset)of C,it means any valid C program is also a valid C++ program.\nLet's see the programming languages that were developed before C++ language.");
        string cpphistory1("\nLanuages\tYear\tDevelop by\nAlgol\t1960\tInternational Groups\nBCPL\t1967\tMartin Ristringd\nB\t1970\tKen Thompson\nTraditional C\t1972\tDennis Ritchie\nK &RC\t1978\tKernighan & Dennis Ritchie\nC++\t1980\tBjarne Stroustrup\nButt++\t2025\tAbubakar Atiq");
        string yesapproval5;
        cout<<"Would you like to see the C++ History,"<<a<<",Type(Y|N):";
        getline(cin,yesapproval5);
        if((yesapproval5=="Y")||(yesapproval5=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ History}-------------------------------------------\t\t\t"<<endl;
        cout<<cpphistory<<cpphistory1<<endl;
        system("pause");
        }
        else if((yesapproval5=="YES")||(yesapproval5=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ History}-------------------------------------------\t\t\t"<<endl;
        cout<<cpphistory<<cpphistory1<<endl;
        system("pause");
        }
        else if((yesapproval5=="N")||(yesapproval5=="n"))
        {
            cout<<endl;
        }
        else if((yesapproval5=="NO")||(yesapproval5=="no"))
        {
            cout<<endl;
        }
        string cppfeatures("C++ Features:-\n\nC++ is an object oriented programming language.It provides a lot of features that are given below.\n1.Simple\n2.Machine Independent or Portable\n3.Mid-level Programming language\n4.Structured programming language\n5.Rich Library\n6.Memory Management\n7.Fast Speed\n8.Pointers\n9.Recursion\n10.Extensible\n11.Object Oriented\n12.Compiler based\n\n");
        string cppfeatures1("1.Simple:\nC++ is a simple language in the sense that it provides structured approach(to break the problem into parts),rich set of library functions,data types etc.\n2.Machine Independent or Portable:\nUnlike assembly language,C programs can be executed in many machines with little bit or no change but it is not platform independent.\n4.Structured Programming language:\nC++ is a structured programming language in the sense that we can break the program into parts using functions.So,it is easy to understand and modify.\n5.Rich Library:\nC++ provides a lot of inbuilt functions that makes the development fast.\n6.Memory Management:\nIt supports the feature of dynamic memory allocation.In C++ language,we can free the allocated memory at any time by calling the free() function.\n7.Speed:\nThe compilation and execution time of C++ language is fast.\n9.Recursion:\nIn C++,we can call the function within the function.It provides code reusability for every function.\n10.Extensible:\nC++ language is extensible because it can easily adopt new features.\n11.Object Oriented:\nC++ is object oriented programming language.OOP's makes development and maintenance easier where as in Procedure-oriented programming language it is not easy to manage if code grows as project size grows.\n12.Compiler based:\nC++ is a compiler based programming language,it means without compilation no C++ program can be executed.First we need to compile our program using compiler and then we can execute our program");
        string ya6;//ya6 stands for yes approved
        cout<<"Would you like to see the C++ Features?Type(Y|N):";
        getline(cin,ya6);
        if((ya6=="Y")||(ya6=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Features}-------------------------------------------\t\t\t"<<endl;
        cout<<cppfeatures<<cppfeatures1<<endl;
        system("pause");
        }
        else if((ya6=="YES")||(ya6=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Features}-------------------------------------------\t\t\t"<<endl;
        cout<<cppfeatures<<cppfeatures1<<endl;
        system("pause");
        }
        else if((ya6=="N")||(ya6=="n"))
        {
            cout<<endl;
        }
        else if((ya6=="NO")||(ya6=="no"))
        {
            cout<<endl;
        }
        string ya7;
        cout<<"Would you like to see C++ basic-I/O?Type(Y|N)";
        getline(cin,ya7);
        if((ya7=="Y")||(ya6=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Basic Input/Output}-------------------------------------------\t\t\t"<<endl;
        string cppbasic("C++I/O operation is using the stream concept.Stream is thee sequence of bytes or flow of data.It makes the performance fast.\nIf bytes flow from main memory to device like printer,display screen,or a network connection,etc,this is called as output operation.\nIf bytes flow from device like printer,display screen,or a network connection,etc to main memory,this is called as input operation.\n\nI/O Library Header Files\nLet us see the common header files used in C++ programming are:\nHeader\t\t\tFunction and description\n<iostream>\t\tIt is used to define the cout,cin and cerr objects,which correspond to standard output stream,standard input stream and standard error stream,respectively\n<iomainip>\t\tIt is used to declare services useful for performing formatted I/O,such as setprecision and setw.\n<fstream>\t\tIt is used to declare services for user-controlled file processing.");
        cout<<cppbasic<<endl;
        system("pause");
        cout<<"STANDARD OUTPUT STREAM(COUT)"<<endl;
        string cppbasic1("The cout is a predefined object of ostream class.It is connected with the standard output device,which is usually a display screen.\nThe cout is used in conjunction with stream insertion operator(<<)to display the output on a console\n\nLet's see the simple example of standard output stream(cout):\n\n#include<iostream>\nusing namespace std;\nint main(){\nstring");
        cout<<cppbasic1<<endl;
        system("pause");
        cout<<"STANDARD INPUT STREAM(CIN)"<<endl;
        string cppbasic2("\nThe cin is a predefined object of istream class.It is connected with the standard input device,which is usually a keyword.\nThe cin is used in conjuction with stream extraction operator(>>)to read the input from a console.\n\nLet's see the simple example of standard input stream(cin):\n#include<iostream>\nusing namespace std;\nint main(){\nint age;\ncout<<''Enter your age: '';\ncin>>age;\ncout<<''Your age is: ''<<age<<endl;\n}\nOutput:Enter your age:Entered age\nYour age:(?)");
        cout<<cppbasic2<<endl;
        system("pause");
        cout<<"STANDARD END LINE(endl)"<<endl;
        string cppbasic3("\nThe endl is a predefined onject of ostream class.It is used to insert a new line stringacters and flushes the stream.\n\nLet's see the simple example of standard end line(endl):\n#include<iostream>\nusing namespace std;\nint main(){\n\tcout<<''C++ Tutorial'';\n\tcout<<''Javapoint''<<endl;\n\tcout<<''End of line''<<endl;\n}\n\tOutput:\n\tC++ Tutorial Java point\n\tEnd of line");
        cout<<cppbasic3<<endl;
        system("pause");
        }
        else if((ya7=="YES")||(ya7=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Basic Input/Output}-------------------------------------------\t\t\t"<<endl;
        string cppbasic("C++I/O operation is using the stream concept.Stream is thee sequence of bytes or flow of data.It makes the performance fast.\nIf bytes flow from main memory to device like printer,display screen,or a network connection,etc,this is called as output operation.\nIf bytes flow from device like printer,display screen,or a network connection,etc to main memory,this is called as input operation.\n\nI/O Library Header Files\nLet us see the common header files used in C++ programming are:\nHeader\t\t\tFunction and description\n<iostream>\t\tIt is used to define the cout,cin and cerr objects,which correspond to standard output stream,standard input stream and standard error stream,respectively\n<iomainip>\t\tIt is used to declare services useful for performing formatted I/O,such as setprecision and setw.\n<fstream>\t\tIt is used to declare services for user-controlled file processing.");
        cout<<cppbasic<<endl;
        system("pause");
        cout<<"STANDARD OUTPUT STREAM(COUT)"<<endl;
        string cppbasic1("The cout is a predefined object of ostream class.It is connected with the standard output device,which is usually a display screen.\nThe cout is used in conjunction with stream insertion operator(<<)to display the output on a console\n\nLet's see the simple example of standard output stream(cout):\n\n#include<iostream>\nusing namespace std;\nint main(){\nstring");
        cout<<cppbasic1<<endl;
        system("pause");
        cout<<"STANDARD INPUT STREAM(CIN)"<<endl;
        string cppbasic2("\nThe cin is a predefined object of istream class.It is connected with the standard input device,which is usually a keyword.\nThe cin is used in conjuction with stream extraction operator(>>)to read the input from a console.\n\nLet's see the simple example of standard input stream(cin):\n#include<iostream>\nusing namespace std;\nint main(){\nint age;\ncout<<''Enter your age: '';\ncin>>age;\ncout<<''Your age is: ''<<age<<endl;\n}\nOutput:Enter your age:Entered age\nYour age:(?)");
        cout<<cppbasic2<<endl;
        system("pause");
        cout<<"STANDARD END LINE(endl)"<<endl;
        string cppbasic3("\nThe endl is a predefined onject of ostream class.It is used to insert a new line stringacters and flushes the stream.\n\nLet's see the simple example of standard end line(endl):\n#include<iostream>\nusing namespace std;\nint main(){\n\tcout<<''C++ Tutorial'';\n\tcout<<''Javapoint''<<endl;\n\tcout<<''End of line''<<endl;\n}\n\tOutput:\n\tC++ Tutorial Java point\n\tEnd of line");
        cout<<cppbasic3<<endl;
        system("pause");
        }
        else if((ya7=="N")||(ya7=="n"))
        {
            cout<<endl;
        }
        else if((ya7=="NO")||(ya7=="no"))
        {
            cout<<endl;
        }
        string ya8;
        cout<<"Would you like to see C++ variables?Type(Y|N):";
        getline(cin,ya8);
        if((ya8=="Y")||(ya8=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Variables}-------------------------------------------\t\t\t"<<endl;
        string cppvariable("C++ Variable:\nA variables is a name of memory location.It is used to store data.Its value can be changed and it can be reused many times.\nIt is a way to represent memory location through symbol so that it can be easily identified.\nLet's see the syntax to declare a variable:\n\ttype variable_list;\n\nThe example of declaring variable is given below:\n\tint x;\n\tfloat y;\n\tstring z;\nHere x,y,z are variables and int,float,string are data types.\n\nWe can also provide values while declaring the variables as given below:\n\tint x=5,b=10;//declaring 2 variables of integer type\n\tfloat f=30.8;\n\tstring c='A';");
        cout<<cppvariable<<endl;
        string cppvariable1("Rules for defining variables:\nA variable can have alphabets,digits and underscore.\nA variable name can start with alphabet and underscore only.It can't start with digit.\nNo white space is allowed within variable name.\nA variable name must not be any reserved word or keyword e.g.string,float etc.\n\tValid variable names:\n\tint a;\n\tint_ab;\n\tint a30;\n\tInvalid variable names:\n\tint 4;\n\tint x y;\n\tint double;");
        cout<<cppvariable1<<endl;
        system("pause");
        }
        else if((ya8=="YES")||(ya8=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Variables}-------------------------------------------\t\t\t"<<endl;
        string cppvariable("C++ Variable:\nA variables is a name of memory location.It is used to store data.Its value can be changed and it can be reused many times.\nIt is a way to represent memory location through symbol so that it can be easily identified.\nLet's see the syntax to declare a variable:\n\ttype variable_list;\n\nThe example of declaring variable is given below:\n\tint x;\n\tfloat y;\n\tstring z;\nHere x,y,z are variables and int,float,string are data types.\n\nWe can also provide values while declaring the variables as given below:\n\tint x=5,b=10;//declaring 2 variables of integer type\n\tfloat f=30.8;\n\tstring c='A';");
        cout<<cppvariable<<endl;
        string cppvariable1("Rules for defining variables:\nA variable can have alphabets,digits and underscore.\nA variable name can start with alphabet and underscore only.It can't start with digit.\nNo white space is allowed within variable name.\nA variable name must not be any reserved word or keyword e.g.string,float etc.\n\tValid variable names:\n\tint a;\n\tint_ab;\n\tint a30;\n\tInvalid variable names:\n\tint 4;\n\tint x y;\n\tint double;");
        cout<<cppvariable1<<endl;
        system("pause");
        }
        else if((ya8=="N")||(ya8=="n"))
        {
            cout<<endl;
        }
        else if((ya8=="NO")||(ya8=="no"))
        {
            cout<<endl;
        }
        string cppdatatype("C++ Data Types:\n\nA Data type specifies the type of data that a variable can store such as integer,floating,stringacter etc.\nThere are 4 types of data types in C++ Language.\nType\t\t\t\t\tData Types\nBasic Data Type\t\t\t\tint,string,float,double,etc.\nDerived Data Type\t\t\tarray,pointer,etc.\nUser Defined Data Type\t\t\tstructure.");
        string cppdatatype1("Basic Data Types:\nThe basic data types are integer-based and floating-point based.C++ language supports both signed and unsigned literals.\nThe memory size of basic data types may change according to 32 or 64 bit operating system.\n\nLet's see the basic data types.It size is given according to 32 bit OS.\n\n");
        string cppdatatype2("Data types:\t\t\t\t\tMemory Size:\t\t\t\tRange:\nstring\t\t\t\t\t\t1 Byte\t\t\t\t\t-128 to 127\nSigned string\t\t\t\t\t1 Byte\t\t\t\t\t-128 to 127\nUnsigned string\t\t\t\t\t1 Byte\t\t\t\t\t0 to 127\nShort\t\t\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nSigned Short\t\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nint\t\t\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nSigned int\t\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nUnsigned int\t\t\t\t\t2 Byte\t\t\t\t\t0 to 32,768\nShort int\t\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nSigned Short int\t\t\t\t2 Byte\t\t\t\t\t-32,768 to 32,768\nUnsigned short int\t\t\t\t2 Byte\t\t\t\t\t0 to 32,767\nlong int\t\t\t\t\t4 Byte\t\t\t\t\tNA\nSigned long int\t\t\t\t\t4 Byte\t\t\t\t\tNA\nUnsigned long int\t\t\t\t4 Byte\t\t\t\t\tNA\nfloat\t\t\t\t\t\t4 Byte\t\t\t\t\tNA\ndouble\t\t\t\t\t\t8 Byte\t\t\t\t\tNA\nLong double\t\t\t\t\t10 Byte\t\t\t\t\tNA\n\n\tNOTE:(NA stands for Not Available)");
        string ya9;
        cout<<"Would you like to see C++ Data types?Type(Y|N):";
        getline(cin,ya9);
        if((ya9=="Y")||(ya9=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ DATA TYPES}-------------------------------------------\t\t\t"<<endl;
        cout<<cppdatatype<<cppdatatype1<<cppdatatype2<<endl;
        system("pause");
        }
        else if((ya9=="YES")||(ya9=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ DATA TYPES}-------------------------------------------\t\t\t"<<endl;
        cout<<cppdatatype<<cppdatatype1<<cppdatatype2<<endl;
        system("pause");
        }
        else if((ya9=="N")||(ya9=="n"))
        {
            cout<<endl;
        }
        else if((ya9=="NO")||(ya9=="no"))
        {
            cout<<endl;
        }
        string cppkeyword("C++ Keywords\n\nA keyword is a reserved word.You cannot use it as a variable name,constant name etc.\nA list of 32 keywords in C++ Language which are also available in C language are given below.");
        string cppkeyword1("\nauto\tbreak\tcase\nstring\nconst\tcontinue\tdefault\tdo\ndouble\telse\trenum\textern\nfloat\tfor\tgoto\tif\nint\tlong\tregister\treturn\nshort\tsigned\tsizeof\tstatic\nstruct\tswitch\ttypedef\tunion\nunsigned\tvoid\tvolatile\twhile");
        string ya10;
        cout<<"Would you like to see C++ Keywords?Type(Y|N):";
        getline(cin,ya10);
        if((ya10=="Y")||(ya10=="y"))
        {
        cout<<"\t\t\t -------------------------------------------{C++ Keywords}-------------------------------------------\t\t\t"<<endl;
        string cppkeyword2("\nA list of 30 Keywords in C++ Language which are not available in C Language are given below:\ndynamic_cast\t\tnamespace\t\treinterpret_cast\nexplicit\t\tnew\t\ttemplate\t\tfriend\noperator\t\tstatic_cast\nthis\t\tinline\t\tpublic\nthrow\t\tprivate\t\tfalse\ndelete\t\tmutable\t\tprotected\ntypeid\t\ttypename\t\tusing\nwstring_t\t\ttry\t\tconst_cast\nbool\t\tclass\t\tcatch\nasm\t\tvirtual\t\ttrue");
        cout<<cppkeyword<<setw(5)<<cppkeyword1<<setw(5)<<cppkeyword2<<endl;
        system("pause");
        }
        else if((ya10=="YES")||(ya10=="yes"))
        {
            cout<<"\t\t\t -------------------------------------------{C++ Keywords}-------------------------------------------\t\t\t"<<endl;
        string cppkeyword2("\nA list of 30 Keywords in C++ Language which are not available in C Language are given below:\ndynamic_cast\t\tnamespace\t\treinterpret_cast\nexplicit\t\tnew\t\ttemplate\t\tfriend\noperator\t\tstatic_cast\nthis\t\tinline\t\tpublic\nthrow\t\tprivate\t\tfalse\ndelete\t\tmutable\t\tprotected\ntypeid\t\ttypename\t\tusing\nwstring_t\t\ttry\t\tconst_cast\nbool\t\tclass\t\tcatch\nasm\t\tvirtual\t\ttrue");
        cout<<cppkeyword<<cppkeyword1<<cppkeyword2<<endl;
        system("pause");
        }
        else if((ya10=="N")||(ya10=="n"))
        {
            cout<<endl;
        }
        else if((ya10=="NO")||(ya10=="no"))
        {
            cout<<"BYE"<<endl;
        }
        }
};
