using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace menu
{
    class Program
    {
        static void Main(string[] args)
        {
            int select, it;
            double dou;
            bool bo = false, boo = false;
            long lo;
            char ch;
            string st;

            Console.WriteLine("select one of the following");
            Console.WriteLine("int [1], double [2], bool [3], long [4], char[5], string[6]");
            
            select = int.Parse(Console.ReadLine());

            switch (select)
            {
                case 1:
                    Console.WriteLine("int");
                    Console.WriteLine("");
                    it = int.Parse(Console.ReadLine());
                    break;
                case 2:
                    Console.WriteLine("double");
                    Console.WriteLine("");
                    dou = double.Parse(Console.ReadLine());
                    break;
                case 3:
                    Console.WriteLine("bool");
                    Console.WriteLine("");
                    bo = 
                    if (bo)
                    {
                        Console.WriteLine("the bool is true");
                    }
                    else
                    {
                        Console.WriteLine("the bool is false");
                    }
                    break;
                case 4:
                    Console.WriteLine("long");
                    Console.WriteLine("");
                    break;
                case 5:
                    Console.WriteLine("char");
                    Console.WriteLine("");
                    break;
                case 6:
                    Console.WriteLine("string");
                    Console.WriteLine("");
                    break;
            }
            Console.ReadLine();
        }
    }
}
