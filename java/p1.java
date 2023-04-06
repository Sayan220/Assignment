// Write a program to accept two short integers from the user and display the sum.
import java.util.*;
public class p1 {
    public static void main(String args[]){
      Scanner sc=new Scanner(System.in);
      System.out.println("ENTER THE 1ST NUMBER");
      short x=sc.nextShort();
      System.out.println("ENTER THE 2ND NUMBER");
      short y=sc.nextShort();
      short sum=(short)(x+y);
      System.out.println("SUM= "+sum);
      sc.close();
    }

}
