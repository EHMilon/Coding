using System.Net;

namespace C_Sharp_Exercise
{
    internal class Program
    {
        static void MyFun()
        {
            Console.ReadLine();
        }
        static void Main(string[] args)
        {

            //Using Math Method in c#:
            /*
            float x = -5.99F;
            int y = 9;
            Console.WriteLine(Math.Max(x,y));
            Console.WriteLine(Math.Min(x,y));
            Console.WriteLine(Math.Abs(x));
            Console.WriteLine(Math.Sqrt(y));
            Console.WriteLine(Math.Round(x))
            */


            //String Operation:
            /*
            string a_z = "AbCdEfGhijKlmNoPqRsTuVwXyZ";
            Console.WriteLine(a_z.ToUpper());
            Console.WriteLine(a_z.ToLower());
            Console.WriteLine("The text of the length is:"+a_z.Length);
            */


            /*
            Console.Write("Enter the value of Circle Radius: ");
            double r = Convert.ToDouble( Console.ReadLine());

            Console.Write("Enter the Coordinate of center x1: ");
            int x1 = Convert.ToInt32( Console.ReadLine());

            Console.Write("Enter the Coordinate of center y1: ");
            int y1 = Convert.ToInt32( Console.ReadLine());

            Console.Write("Enter the Coordinate of isosceles x2: ");
            int x2 = Convert.ToInt32( Console.ReadLine());

            Console.Write("Enter the Coordinate of isosceles y2: ");
            int y2 = Convert.ToInt32( Console.ReadLine());

            double oc = Math.Sqrt(Math.Pow((x2-x1),2)+Math.Pow((y2-y1),2));
            Console.WriteLine("The height of  lombo: "+oc);

            double cb = Math.Sqrt(Math.Pow(r,2)-Math.Pow(oc,2));
            Console.WriteLine("The Length of isosceles : " +cb*2);
             */


            //String interpolation
            /*
            string first_Name = "Ehsanul Haque";
            string last_Name = "Milon";
            string full_Name = $"{first_Name} {last_Name}";
            //Use the dollar sign ($) when using the string interpolation method.
            Console.WriteLine(full_Name);
            */


            //C# String Accessing:
            /*
            string name = "Hello World!";
            Console.WriteLine(name[0]);
            Console.WriteLine(name.IndexOf("o"));
            Console.WriteLine(name.Substring(6));
            */


            //Largest value between tow number:
            /*
            Console.Write("Enter First Number: ");
            int Num1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Second Number:  ");
            int Num2 = Convert.ToInt32(Console.ReadLine());

            //Short Hand If...Else (Ternary Operator)
            //variable = (condition) ? expressionTrue :  expressionFalse;
            string largest_value = (Num1>Num2)? Num1+"is greater than " + Num2 : Num2 + " is largest value." ;
            Console.Write(largest_value);
            */

            //Largest value between three number:
            /*
            Console.Write("Enter First Number: ");
            int Num1 =Convert.ToInt32 (Console.ReadLine());
            Console.Write("Enter Second Number:  ");
            int Num2 =Convert.ToInt32 (Console.ReadLine());
            Console.Write("Enter Third Number: ");
            int Num3 =Convert.ToInt32 (Console.ReadLine());

            if (Num1 > Num2)
            {
                if (Num1 > Num3)
                {
                    Console.WriteLine(Num1 + " is largest. ");
                }
                else
                {
                    Console.WriteLine(Num3 + " is largest.");
                }
            }
            else if (Num2>Num1)
            {
                if (Num2>Num3)
                {
                    Console.WriteLine(Num2 + " is largest.");
                }
                else
                {
                    Console.WriteLine(Num3 + " is largest.");
                }
            }
            else
            {
                Console.WriteLine(Num3 + " is largest.");
            }
            */

            // Program using switch statement:
            // Calculate the alphabet vowel or consonant:
            /*
            Console.WriteLine("Enter a alphabet :");
            char alpha =Convert.ToChar (Console.ReadLine());

            switch(char.ToLower(alpha))
            {
                case 'a':
                    Console.WriteLine("A is a vowel.");
                    break;
                case 'e':
                    Console.WriteLine("E is a vowel.");
                    break;
                case 'i':
                    Console.WriteLine("I is a vowel");
                    break;
                case 'o':
                    Console.WriteLine("O is a vowel");
                    break;
                case 'u':
                    Console.WriteLine("U is a vowel");
                    break;
                default:
                    Console.WriteLine(alpha+" is a consonant");
                    break;
            }
           */


            //Basic Calculator:
            ///*
             Console.WriteLine("First value than Operator than Second value.");
             Console.Write("Enter a number : ");
             double first = Convert.ToDouble(Console.ReadLine());

             Console.Write("Enter a symbol(+,-,*,/,%) : ");
             char symbol = Convert.ToChar(Console.ReadLine());

             Console.Write("Enter  another number : ");
             double second = Convert.ToDouble(Console.ReadLine());

             switch (symbol)
             {
                 case '+':
                     Console.WriteLine(first + second);
                     break;
                 case '-':
                     Console.WriteLine(first - second);
                     break;
                 case '*':
                     Console.WriteLine(first * second);
                     break;
                 case '/':
                     Console.WriteLine(first / second);
                     break;
                 case '%':
                     Console.WriteLine(first % second);
                     break;
                 default:
                     Console.WriteLine("Oops, Something Wrong.");
                     break;
                    Console.ReadKey();
             }
             //*/

            
        }

    }
}