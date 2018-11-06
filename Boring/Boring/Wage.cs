using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Boring
{
    class Wage : Employee
    {
         string payType = "Hourly";
         int number;
         string name;
         string address;
         string phone;
         double hoursWorked;
         double hourlyRate;
         double netPay;

        public override double NetPay(double hour, double rate)
        {
            hour = hoursWorked;
            rate = hourlyRate;
            return (hour*rate*.8);
        }

        public override void Write()
        {
            Console.WriteLine("Employee Pay Type:       "+payType);
            Console.WriteLine("Employee Number:         "+number);
            Console.WriteLine("Employee Name:           "+name);
            Console.WriteLine("Employee Address:        "+address);
            Console.WriteLine("Employee Phone:          "+phone);
            Console.WriteLine("Employee Hours Worked:   "+hoursWorked);
            Console.WriteLine("Employee Hourly Rate:    "+hourlyRate);
            Console.WriteLine("Employee Net Pay:        "+netPay);
            Console.WriteLine();
        }


        public Wage(int n, string nm, string add, string phne, double hour, double rate)
        {
            number = n;
            name = nm;
            address = add;
            phone = phne;
            hoursWorked = hour;
            hourlyRate = rate;
            netPay = NetPay(hour, rate);
        }
    }
}
