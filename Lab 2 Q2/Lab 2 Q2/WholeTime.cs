using System;
using System.Collections.Generic;
using System.Text;

namespace Lab_2_Q2
{
    public class WholeTime : Employee
    {
        public double YearlyPayment { get; set; }

        public WholeTime() { }
        public WholeTime(string name, string address, int phoneNumber, string position, double yearlyPayment)
            : base (name, address, phoneNumber, position)
        {
            this.YearlyPayment = yearlyPayment;
        }

        public override void DisplayGrossPay()
        {
            Console.WriteLine("GrossPay: " + String.Format("{0:0.00}", this.YearlyPayment));
        }

        public override void DisplayNetPay()
        {
            Console.WriteLine("Net Pay: " + String.Format("{0:0.00}", (this.YearlyPayment - (this.YearlyPayment * 0.1))));
            Console.WriteLine("Deductions:\nTax(10%)");
        }

        public override void DisplayWorkerDetails()
        {
            Console.WriteLine("Name: {0}\nAddress: {1}\nPhone Number: {2}\nPosition: {3}", this.Name, this.Address, this.PhoneNumber, this.Position);
        }

        public override void DisplayHolidayEntitlements()
        {
            Console.WriteLine("Holiday Entitlements: 20 non-paid days per year");
        }

        public override void DisplayPensionContributions()
        {
            Console.WriteLine("Not eligible for pension contributions");
        }
    }
}
