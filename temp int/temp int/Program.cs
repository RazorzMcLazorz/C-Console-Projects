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
            double jed, sit, tem;

            Console.WriteLine("1 int");
            jed = int.Parse(Console.ReadLine());
            Console.WriteLine("2 int");
            sit = int.Parse(Console.ReadLine());

            Console.WriteLine(jed + " " + sit);
            tem = jed;

            jed = sit;

            sit = tem;

            Console.WriteLine(jed + " " + sit);
            Console.ReadLine();
        }
    }
}
