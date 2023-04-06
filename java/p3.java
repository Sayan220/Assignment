//Write a program that accepts height in cm as int and displays the height in feet and inches.
// Assume, 1 inch equals 2.54 cm and 1 foot equals 30.5 cm.

import java.util.*;
public class p3 {
    public static void main(String args[]){
        System.out.println("enter the height");
        Scanner sc =new Scanner(System.in);
        int height=sc.nextInt();
        System.out.println("the height in inches : "+0.393701*height);
        System.out.println("the height in feet : "+0.0328084*height);
        sc.close();
    }
}
