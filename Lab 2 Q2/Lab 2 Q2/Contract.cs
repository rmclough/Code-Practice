using System;
using System.Collections.Generic;
using System.Text;

namespace Lab_2_Q2
{
    public class Contract : Employee
    {
        public double HourlyRate { get; set; }
        public int HoursWorked { get; set; }

        public Contract() { }

        public Contract(string name, string address, int phoneNumber, string position, double hourlyRate, int hoursWorked) 
            : base(name, address, phoneNumber, position)
        {
            this.HourlyRate = hourlyRate;
            this.HoursWorked = hoursWorked;
        }

        public override void DisplayGrossPay()
        {
            Console.WriteLine("Gross Pay: " + String.Format("{0:0.00}", this.HourlyRate * this.HoursWorked));
        }

        public override void DisplayNetPay()
        {
            Console.WriteLine("Net Pay: " + String.Format("{0:0.00}", this.HourlyRate * this.HoursWorked));
            Console.WriteLine("Deductions:\nN/A");
        }

        public override void DisplayWorkerDetails()
        {
            base.DisplayWorkerDetails();
        }

        public override void DisplayHolidayEntitlements()
        {
            Console.WriteLine("Not eligible for holiday benefits");
        }

        public override void DisplayPensionContributions()
        {
            Console.WriteLine("Not eligible for pension contributions");
        }
    }
}
