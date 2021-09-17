using System;
using System.Collections.Generic;
using System.Text;

namespace Lab_2_Q2
{
    public class FullTime : Employee
    {
        public double MonthlySalary { get; set; }

        public FullTime() { }
        public FullTime(string name, string address, int phoneNumber, string position, double monthlySalary) 
            : base(name, address, phoneNumber, position)
        {
            this.MonthlySalary = monthlySalary;
        }

        public override void DisplayGrossPay()
        {
            Console.WriteLine("Gross Pay Per Month: " + String.Format("{0:0.00}", this.MonthlySalary));
            Console.WriteLine("Gross Pay Per Year: " + String.Format("{0:0.00}", this.MonthlySalary * 12));
        }

        public override void DisplayNetPay()
        {
            Console.WriteLine(("Net Pay: " + String.Format("{0:0.00}", (this.MonthlySalary - (this.MonthlySalary * 0.2)))));
            Console.WriteLine("Deductions:\nTax(10%)\nPension(10%)");
        }

        public override void DisplayWorkerDetails()
        {
            base.DisplayWorkerDetails();
        }

        public override void DisplayHolidayEntitlements()
        {
            Console.WriteLine("Holiday Entitlements: 25 paid days per year");
        }

        public override void DisplayPensionContributions()
        {
            Console.WriteLine("Pension Contribution(10%): " + String.Format("{0:0.00}", (this.MonthlySalary * 0.1)) + " Per Month");
        }

    }
}
