using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CaptainJack
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine("How much gold");
            int gold = int.Parse(Console.ReadLine());
            Console.WriteLine("how many people on the boat");
            int crew = int.Parse(Console.ReadLine());
            gold = gold - ((crew - 2) * 3);

            int jack = (int)(gold * .12);
            gold = gold - jack;

            int gil = (int)(gold * .08);
            gold = gold - gil;

            int crewGold = gold / crew;

            int fund = gold % crew;

            Console.WriteLine("jack has "+ (jack + crewGold));
            Console.WriteLine("Giligan has "+ (gil + crewGold));
            Console.WriteLine("The Crew has " + (3 + crewGold));
            Console.WriteLine("left over " + fund);
            Console.ReadLine();
        }
    }
}
