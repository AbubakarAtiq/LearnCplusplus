#include<iostream>
using namespace std;
int main()
{
    /*
    C++ Literals
    Literals are data used for representing fixed values. They can be used directly in the code. For example: 1,2.5,'c' etc.
    Here, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms.
    Here is a list of different literals in C++ Programming.
    _____________________________
    1.Integers
        An integer is a numeric literal (associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:
        ->decimal (base 10)
        ->octal (base 8)
        ->hexadecimal (base 16)
        For example:
        Decimal: 0,-9,22 etc
        Octal: 021 , 077 , 033 etc
        Hexadecimal: 0x7f, 0x2a, 0x521 etc
        In C++ programming, octal starts with a 0, and hexadecimal starts with a 0x.
    2. Floating-point Literals
        A floating-point literal is a numeric literal that has either a fractional form or an exponent form, for example:
        -2.0
        0.0000234
        -0.22E-5
        Note: E-5=10^-5
    3. Characters
        A character literal is created by enclosing a single character inside single quotation marks. For example: 'a','m', 'F', '2','}' etc.
    4. Escape Sequences
        Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C++ programming. For example, newline(enter),tab,question mark,etc.
        In order to use these characters, escape sequences are used.
        Escape Sequences                Characters
        \b                              Backspace
        \f                              Form feed
        \n                              Newline
        \r                              Return
        \t                              Horizontal tab
        \v                              Vertical tab
        \\                              Backslash
        \'                              Single quotation mark
        \"                              Double quotation mark
        \?                              Question mark
        \0                              Null Character
    5. String Literals
        A string literal is a sequence of characters enclosed in double-quote marks. For example:
        "good"                      string constant
        ""                          null string constant
        " "                         string constant of six white space
        "x"                         string constant having a single character
        "Earth is round\n"          prints string with a newline
        We will learn about strings in details in the C++ string tutorial.
    6. C++ Constants
        In C++, we can create variables whose value cannot be changed. For that, we use the const keyword. Here is an example:
            const int LIGHT_SPEED=299792458;
            LIGHT_SPEED=2500    //ERROR! LIGHT_SPEED is a constant.
        Here, we have used the keyword const to declare a constant named LIGHT_SPEED. If we try to change the value of LIGHT_SPEED, we will get an error.
        A constant can also be created using the #define preprocessor directive. We will learn about it in detail in the C++ Macros tutorial.

    */
    cout<<endl;main();
}