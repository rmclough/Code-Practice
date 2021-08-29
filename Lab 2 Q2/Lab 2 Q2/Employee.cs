using System;
using System.Collections.Generic;
using System.Text;

namespace Lab_2_Q2
{
    public abstract class Employee
    {
        public string Name { get; set; }
        public string Address { get; set; }
        public int PhoneNumber { get; set; }
        public string Position { get; set; }
        

        public Employee() { }

        public Employee(string name, string address, int phoneNumber, string position)
        {
            this.Name = name;
            this.Address = address;
            this.PhoneNumber = phoneNumber;
            this.Position = position;
            
        }

        public abstract void DisplayGrossPay();
        

        

        public abstract void DisplayNetPay();
        

        

        public virtual void DisplayWorkerDetails()
        {
            Console.WriteLine("Name: {0}\nAddress: {1}\nPhone Number: {2}\nPosition: {3}", this.Name, this.Address, this.PhoneNumber, this.Position);
        }

        public abstract void DisplayHolidayEntitlements();




        public abstract void DisplayPensionContributions();
        

        

    }
}
