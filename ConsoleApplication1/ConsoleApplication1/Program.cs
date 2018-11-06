using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace swap
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2;

            Console.WriteLine("Enter an integer. ");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter another integer. ");
            num2 = int.Parse(Console.ReadLine());

            Console.WriteLine("Before Swapping " + num1 + "   " + num2);

            Swap(ref num1, ref num2);

            Console.WriteLine("After Swapping " + num1 + "   " + num2);

            



            Console.ReadLine();
        }
    }
}
