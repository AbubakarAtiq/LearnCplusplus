using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    //namespace is a container
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\tAbubakar Atiq");
            Console.Write("\tGood to see you");
            Console.ReadLine();//Pause the program
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
            //type casting
            int a = 34;
            float b = 34.4F;//by default, numbers with points are recorded as double, but if you want the IDE to accept it as float then you have to write F for Float, d for double, respectively.
            Console.WriteLine("It is an integer:"+a);
            Console.WriteLine("It is a float:"+b);
            Console.ReadLine();
        }
    }
}
//Recommended video
//https://www.youtube.com/watch?v=SuLiu5AK9Ps