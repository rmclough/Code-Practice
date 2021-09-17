/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exercises;
import java.util.Scanner;

/**
 *
 * @author K00252501
 */
public class Exercise2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //User enters date. Program determines successor date
        
        Scanner sc = new Scanner(System.in);
        int nDays = 0;
        boolean leapYear = false;
        
        System.out.println("Enter Day");
        int day = sc.nextInt();
        System.out.println("Enter Month");
        int month = sc.nextInt();
        System.out.println("Enter Year");
        int year = sc.nextInt();
        
        if (year % 4 == 0)
            leapYear = true;
        
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            nDays = 30;
        }
        else if(month == 2)
        {
            if (!leapYear) {
                nDays = 28;
            }
            else
                nDays = 29;
        }
        else
            nDays = 31;
        
        if (day == nDays) {
            day = 1;
            if (month != 12)
                month++;
            else
            {
                month = 1;
                year++;
            }
        }
        else
            day++;
        
        System.out.println("Successor date is " + day+"/"+month+"/"+year);
    }
    
}
