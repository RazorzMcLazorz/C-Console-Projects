using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace HolyWar
{
    class Program
    {
        static void Main(string[] args)
        {
            int i1 = 0, i2 = 0, tempWarrior = 0;

            Console.WriteLine("enter Yodas' integer");
            i1 = int.Parse(Console.ReadLine());

            Console.WriteLine("enter Darth Vaders' integer");
            i2 = int.Parse(Console.ReadLine());

            Console.WriteLine(i1 + "   " + i2);

            tempWarrior = i1;
            i1 = i2;
            i2 = tempWarrior;

            Console.WriteLine(i1+"   "+i2);

            






            Console.ReadLine();
        }
    }
}
