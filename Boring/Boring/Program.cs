using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Boring
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Employee> hero = new List<Employee>();
            hero.Add(new Wage(1, "Batman", "Gotham City", "<800>Iam-Aman", 42.5, 15.5));
            hero.Add(new Salary(2, "Superman", "Metropolis", "<800>fly-CanI", 10000, 10000));
            hero.Add(new Wage(3, "Aquaman", "Ocean", "<800>Can-Swim", 9, 90));
            hero.Add(new Salary(4, "Flash", "Homeless", "<800>Run-Fast", 20000, 20000));

            foreach (Employee cat in hero)
                {
                    cat.Write();
                }
            Console.ReadLine();
        }
    }
}
