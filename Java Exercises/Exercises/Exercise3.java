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
public class Exercise3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int counter = 1;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= counter; j++) {
                System.out.print(i*j+" ");
            }
            System.out.print("\n");
            counter++;
        }
        
        System.out.println("");
    }
    
}
