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
public class Exercise4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int num2 = 0;
        
        ArrayList<Integer> factors = new ArrayList<>();
        
        for (int i = 1; i <= (num/2); i++) {
            if (num % i == 0) {
                factors.add(i);
            }
        }
        
        for (int x : factors)
        {
            num2 += x;
        }
        
        System.out.println("Original Number: "+num+"\nNew Number: "+num2);
        
        if (num == num2) 
            System.out.print("Perfect Number");
        else
            System.out.print("Not a Perfect Number");
            
        
        
        
    }
    
}
