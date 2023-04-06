//Write a program that accepts the radius of a circle and displays the area of the circle. Declare a constant pi equals 3.14.

import java.util.Scanner;
public class p4 {
    static final double pi = 3.14;
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the radius : ");
        int radius=sc.nextInt();
        double area =pi*radius*radius;
        System.out.println("the area of circle : "+area);
        sc.close();
    }
    
}
