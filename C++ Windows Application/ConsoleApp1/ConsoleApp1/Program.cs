using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Remoting.Services;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    //namespace is a container
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\t-------------");
            Console.WriteLine("\tAbubakar Atiq");
            Console.WriteLine("\t_____________");
            Console.Write("\tGood to see you\n");
            //Console.ReadLine();//Pause the program
            /*comments*/
            //variables are also containers, as same as namespace
            //int ab = 34;//ab is the container and variable.
            //Console.WriteLine("\tPresenting age:" + ab);
            //Console.ReadLine();
            /*
             * Data types in C#:
             * Integer - int ab;-->4 bytes
             * Floating point number - float that;-->4 bytes
             * character - char a = 'A';--> 2 bytes
             * Boolean - bool isGreat = true;--> 1 bit
             * string ab= "Ab is good";--> 2 bytes per character
             * long -  long ab;--> 8 bytes
             * double - double ab;--> 8 bytes
             */
            //string abu = Console.ReadLine();//readline return string, user enter data assume 1 entered
            //Console.WriteLine(abu);//it will display 1
            //Console.ReadLine();//it will display 1
            //type casting double to float
            //int a = 34;
            //float b = 34.4F;//by default, numbers with points are recorded as double, but if you want the IDE to accept it as float then you have to write F for Float, d for double, respectively.
            //bool isab = true;
            //char d = 'a';
            //Console.WriteLine("It is an integer:"+a);
            //Console.WriteLine("It is a float:"+b);
            //Console.WriteLine(isab);
            //Console.WriteLine(d);
            //Console.ReadLine();
            /*type casting
             * converting one data type to another data type
             * there are two types of type casting
             * 1. Implicit casting
             * char to int to long to float to double
             * 2. Explicit casting
             * * int a= (int)3.5;
             * double x1=(double)3.5;
             * console.Writeline(x1);
             * 
             */
            //int x = 3;
            //double y = x;
            //int z = 'y';
            //float varr = Convert.ToInt32(3.55);
            //string sx = "34 is amazing";
            //Console.WriteLine(x);
            //Console.WriteLine(y);
            //Console.WriteLine(z+"showing askey of y");//ctrl+D to type same line
            //Console.WriteLine("enter your name;");
            //string name = Console.ReadLine();
            //Console.WriteLine("Hello" + name);
            //Console.ReadLine();
            /*
             * Operators in C#
             * 1.Arithmetic operators
             * 2.Assignment Operators
             * 3.Logical Operators
             * 4.Comparison Operators
             */
            //int a=4,b = 4;
            //Console.WriteLine("The value of a+b is:" + (a + b));
            //Console.WriteLine("The value of a-b is:" + (a - b));
            //Console.WriteLine("The value of a*b is:" + (a * b));
            //Console.WriteLine("The value of a/b is:" + (a / b));

            //Assignment Operators
            //int a, b = 4;
            //b -= 4;
            //b *= 4;
            //b /= 4;
            //Console.WriteLine(b);

            //Logical operators
            //Console.WriteLine(true && false);
            //Console.WriteLine(true && true);
            //Console.WriteLine(false && false);

            //Console.WriteLine(true || true);
            //Console.WriteLine(true || true);
            //Console.WriteLine(false || false);

            //Console.WriteLine(!false);
            //Console.WriteLine(!true);

            //comparison operators
            //Console.WriteLine(324 > 55);
            //Console.WriteLine(324 >= 55);
            //Console.WriteLine(324 <= 55);
            //Console.WriteLine(324 != 55);

            //Math class in C sharp
            int a = Math.Max(34, 5454);
            Double a1 = Math.Sqrt(39);
            Console.WriteLine(a);
            Console.ReadLine();
        }
    }
}
//Recommended video
//https://www.youtube.com/watch?v=SuLiu5AK9Ps