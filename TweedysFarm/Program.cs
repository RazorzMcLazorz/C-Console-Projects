using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace TweedysFarm
{
    class Program
    {
        static void Main(string[] args)
        {
            double rad, sqa, hei;
            Console.WriteLine("radius of one light");
            rad = double.Parse(Console.ReadLine());
            rad = 3.14 * rad * rad;
            Console.WriteLine("whats the base of the square");
            sqa = double.Parse(Console.ReadLine());
            Console.WriteLine("whats the height of the square");
            hei = double.Parse(Console.ReadLine());
            sqa = sqa * hei;

            Console.WriteLine("the area of the light is " + rad + "ft^2");
            Console.WriteLine("the area of the Square is " + sqa+ "ft^2");
            Console.ReadLine();
        }
    }
}
