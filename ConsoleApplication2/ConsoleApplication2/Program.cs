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
            double diam = 0, rot = 0, dist = 0, hi;
            const double PIE = 3.14, MILE = 5280;

            Console.Write("Enter the diameter of the Wheel");
            diam = double.Parse(Console.ReadLine());

            Console.Write("Enter the rotations of the wheel");
            rot = double.Parse(Console.ReadLine());

            dist = diam * PIE * rot / MILE;

            Console.WriteLine("The wheel is " + diam);
            Console.WriteLine("The rotations are " + rot);
            Console.WriteLine("The pioneers travelled " + dist);

            Console.WriteLine("HI");
            hi = double.Parse(Console.ReadLine());
        }
    }
}
