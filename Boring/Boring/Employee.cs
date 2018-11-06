using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Boring
{
    abstract class Employee
    {
        string payType;
        int number;
        string name;
        string address;
        string phone;
        double hoursWorked;
        double netPay;

        public virtual void Write()
        {
        }

        public virtual double NetPay(double hour, double rate)
        {
            return 0;
        }
    }
}
