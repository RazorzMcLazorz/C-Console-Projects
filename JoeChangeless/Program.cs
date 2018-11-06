using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace JoeChangeless
{
    class Program
    {
        static void Main(string[] args)
        {
            int cents, qua, dim, nick, pen;
            Console.WriteLine("how much cents in total");
            cents = int.Parse(Console.ReadLine());

            qua = cents / 25;
            cents = cents % 25;
            dim = cents / 10;
            cents = cents % 10;
            nick = cents / 5;
            cents = cents % 5;
            pen = cents / 1;
            cents = cents % 1;
            Console.WriteLine(qua +" quaters");
            Console.WriteLine(dim + " dimes");
            Console.WriteLine(nick + " nickels");
            Console.WriteLine(pen + " pennys");
            Console.ReadLine();
        }
    }
}
