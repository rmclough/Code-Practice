using System;
using System.Collections.Generic;

namespace Lab_2_Q2
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Employee> employeeList = new List<Employee>();

            int option = 0;
            do
            {
                Console.WriteLine("1.   Enter New Employee");
                Console.WriteLine("2.   Display Employee Details");
                Console.WriteLine("3.   Display Gross Pay");
                Console.WriteLine("4.   Display Net Pay");
                Console.WriteLine("5.   Display Holiday Entitlements");
                Console.WriteLine("6.   Display Pension Contributions");
                Console.WriteLine("7.   Exit");

                option = Convert.ToInt32(Console.ReadLine());
                switch (option)
                {
                    case 1:
                        {
                            enterNewEmployee(employeeList);
                            break;
                        }
                    case 2:
                        {
                            displayEmployeeDetails(employeeList);
                            break;
                        }
                    case 3:
                        {
                            displayGrossPay(employeeList);
                            break;
                        }
                    case 4:
                        {
                            displayNetPay(employeeList);
                            break;
                        }
                    case 5:
                        {
                            displayHolidayEntitlements(employeeList);
                            break;
                        }
                    case 6:
                        {
                            displayPensionContributions(employeeList);
                            break;
                        }
                    case 7:
                        break;
                    default:
                        Console.WriteLine("Option Not Implemented");
                        break;
                }
            } while (option != 7);

            static void enterNewEmployee(List<Employee> eList)
            {
                Contract c1 = new Contract("John", "Limerick", 087111111, "Contract", 9.80, 39);
                FullTime f1 = new FullTime("James", "Clare", 087222222, "Full-Time", 2500);
                WholeTime w1 = new WholeTime("Jack", "Tipperary", 087333333, "Whole-Time", 40000);

                eList.Add(c1);
                eList.Add(f1);
                eList.Add(w1);

                Console.WriteLine("New Employees added to the system");
            }

            static void displayEmployeeDetails(List<Employee> eList)
            {
                foreach (Employee a in eList)
                {
                    a.DisplayWorkerDetails();
                    Console.WriteLine("\n");
                }
            }

            static void displayGrossPay(List<Employee> eList)
            {
                foreach (Employee a in eList)
                {
                    a.DisplayGrossPay();
                    Console.WriteLine("\n");
                }
            }

            static void displayNetPay(List<Employee> eList)
            {
                foreach (Employee a in eList)
                {
                    a.DisplayNetPay();
                    Console.WriteLine("\n");
                }
            }

            static void displayHolidayEntitlements(List<Employee> eList)
            {
                foreach (Employee a in eList)
                {
                    a.DisplayHolidayEntitlements();
                    Console.WriteLine("\n");
                }
            }

            static void displayPensionContributions(List<Employee> eList)
            {
                foreach (Employee a in eList)
                {
                    a.DisplayPensionContributions();
                    Console.WriteLine("\n");
                }
            }





        }
    }
}
