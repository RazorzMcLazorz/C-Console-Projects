using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            double worked, wage, tog, togs;
            Console.WriteLine("How many hours you worked");
            worked = int.Parse(Console.ReadLine());
            Console.WriteLine("your hourly wage");
            wage = int.Parse(Console.ReadLine());

            togs = worked * wage;

            tog = togs * .2;

            togs = togs - tog;
            Console.WriteLine("" + togs);
            Console.ReadLine();
        }
    }
}
