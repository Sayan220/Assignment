//Write a program that accepts a String and assigns it to another. Check the outcome of comparison with == and equals() method. 
//Take two Strings and put same input for them. Repeat the equality checking. 
import java.util.*;
public class p5 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string :");
        String name1 =sc.nextLine();
        String name2=name1;   //assign done
        System.out.println("the 2nd string is "+name2);
        System.out.println(name1.equals(name2));  //true
        System.out.println(name1==name2);         //true

        System.out.println("\nenter 1st string :");
        String str1 =sc.nextLine();
        System.out.println("enter 2nd string :");
        String str2 =sc.nextLine();
        System.out.println("check for equality");
        System.out.println(str1.equals(str2));    //true
        System.out.println(str1==str2);           //false
        sc.close();
    }
}
