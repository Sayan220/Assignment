/*import java.util.Scanner;

class Student{
    int roll;
    String name;
    double score;
    public void setAttributes(int roll, String name, double score){
        this.roll=roll;
        this.name=name;
        this.score=score;
    }
    public void printAttributes(){
        System.out.println("The roll number is: " + roll);
        System.out.println("The name is: " + name);
        System.out.println("The score is: " + score);
    }
    public void copyAttributes(Student a){
        a.roll=this.roll;
        a.name=this.name;
        a.score=this.score;
    }
}

public class p7 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Student s1=new Student();
        //System.out.print("Enter roll number: ");
        int roll=Integer.parseInt(args[0]);
        //String fake=sc.nextLine();
       // System.out.print("Enter name: ");
        String name=args[1];
        //System.out.print("Enter score: ");
        double score=Double.parseDouble(args[2]);
        s1.setAttributes(roll,name,score);
        System.out.println("Details of Student1: ");
        s1.printAttributes();
        Student s2=new Student();
        s1.copyAttributes(s2);
        System.out.println("Details of Student2: ");
        s2.printAttributes();
    }
}*/
