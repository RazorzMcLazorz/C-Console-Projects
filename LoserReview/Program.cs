using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LoserReview
{
    class Program
    {
        static void Main(string[] args)
        {
            Random deal = new Random();

            Console.Write("Hit 'Enter' to deal 1st card");
            Console.ReadLine();
            int card1 = deal.Next(2, 11);

            Console.Write("Hit 'Enter' to deal 2nd card");
            Console.ReadLine();
            int card2 = deal.Next(2, 11);

            int total = card1 + card2;

            if (total == 21)
                Console.WriteLine("You win, Mr. Vegas!");
            else if (total > 21)
                Console.WriteLine(total + "You busted!");
            else if (total > 16)
                Console.WriteLine("I'll stand at " + total + "!");
            else
                Console.WriteLine(total + " Hit me again!");


            Console.ReadLine();
        }
    }
}
