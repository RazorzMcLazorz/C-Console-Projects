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
            int main = 0, tempOne = 0, tempTwo = 0, tempThree = 0, tempWarrior = 0;

            Console.WriteLine("Enter a 3 digit integer");
            main = int.Parse(Console.ReadLine());

            tempWarrior = main;

            

            tempOne = tempWarrior % 1000;
            tempOne = tempOne / 100;

            Console.WriteLine(""+ tempOne);

            tempTwo = tempWarrior % 100;
            tempTwo = tempTwo / 10;

            Console.WriteLine("" + tempTwo);

            tempThree = tempWarrior % 10;
            tempThree = tempThree / 1;

            Console.WriteLine("" + tempThree);

            int total = tempOne + tempTwo + tempThree;

            Console.WriteLine("" + total);
            

            Console.ReadLine();
        }
    }
}
