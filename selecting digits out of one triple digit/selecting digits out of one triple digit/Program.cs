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
            int dig, o, t, th, y, u;
            Console.WriteLine("3 digit number");
            dig = int.Parse(Console.ReadLine());

            o = dig / 100;

            y = o * 10;

            t = dig / 10;

            u = t * 10;

            t = t - y;

            th = dig / 1;

            th = th - u;

            dig = o + t + th;
            Console.WriteLine(o);
            Console.WriteLine(t);
            Console.WriteLine(th);
            Console.WriteLine(dig);
            Console.ReadLine();
        }
    }
}
