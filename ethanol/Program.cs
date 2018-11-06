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
            double corn, gas, gal, dis;

            Console.WriteLine("how many gallons");
            gal = double.Parse(Console.ReadLine());

            Console.WriteLine("distance");
            dis = double.Parse(Console.ReadLine());

            corn = dis * .1;

            corn = dis - corn;

            gas = dis;



            Console.WriteLine("at " + gal + " gallons of ethanol you get to " + corn +" miles");
            Console.WriteLine("at " + gal + " gallons of pure gas you get to " + gas + " miles");
            Console.ReadLine();
        }
    }
}
