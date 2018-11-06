using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Boring
{
    class Salary : Employee
    {
        string payType = "Salaried";
        int number;
        string name;
        string address;
        string phone;
        double hoursWorked;
        double netPay;

        public override double NetPay(double hour, double hour2)
        {
            hour = hoursWorked;
            return hour * .8;
        }

        public override void Write()
        {
            Console.WriteLine("Employee Pay Type:       " + payType);
            Console.WriteLine("Employee Number:         " + number);
            Console.WriteLine("Employee Name:           " + name);
            Console.WriteLine("Employee Address:        " + address);
            Console.WriteLine("Employee Phone:          " + phone);
            Console.WriteLine("Employee Salary:         " + hoursWorked);
            Console.WriteLine("Employee Net Pay:        " + netPay);
            Console.WriteLine();
        }

        public Salary(int n, string nm, string add, string phne, double hour, double hour2)
        {
            number = n;
            name = nm;
            address = add;
            phone = phne;
            hoursWorked = hour;
            netPay = NetPay(hour, hour2);
        }
        
    }
}
