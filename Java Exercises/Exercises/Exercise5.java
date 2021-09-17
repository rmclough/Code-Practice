/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exercises;

import java.util.Scanner;
import java.util.ArrayList;
/**
 *
 * @author K00252501
 */
public class Exercise5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        while(num != -1)
        {
            
            int num1=0;
            int num2=0;
            int num3=0;
            int num4=0;
            int temp = 0;

            num1 = num/1000;

            num2 = num-num1*1000;
            num2 /= 100;

            num3 = (num1 * 1000) + (num2*100);
            num3 = (num-num3)/10;

            num4 = num % 10;

            num1 +=7;
            num1 %= 10;
            num2 +=7;
            num2 %= 10;
            num3 += 7;
            num3 %= 10;
            num4 +=7;
            num4 %= 10;

    //        System.out.println(num1);
    //        System.out.println(num2);
    //        System.out.println(num3);
    //        System.out.println(num4);

            temp = num1;
            num1 = num3;
            num3 = temp;

            temp = num2;
            num2 = num4;
            num4 = temp;

            System.out.println(num1);
            System.out.println(num2);
            System.out.println(num3);
            System.out.println(num4);

            num1*=1000;
            num2*=100;
            num3*=10;
            num = num1+num2+num3+num4;

            System.out.println("Encrypted Number is: " + num);
            num = sc.nextInt();
        }
        
        
    }
    
}
