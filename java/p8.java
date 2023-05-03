import java.util.Scanner;

class Student{
    int roll;
    String name;
    double score;
    public Student(){}
    public Student(int roll){
        this.roll = roll;
        this.name = "NoInput";
        this.score = 0.0;
    }
    public Student(int roll,String name){
        this.roll = roll;
        this.name = name;
        this.score = 0.0;
    }
    public Student(int roll, String name, double score){
        this.roll = roll;
        this.name = name;
        this.score = score;
    }
    public void printAttributes(){
        System.out.println("The roll number is: " + roll);
        System.out.println("The name is: " + name);
        System.out.println("The score is: " + score);
    }
    
    public Student(Student s){
        this.roll=s.roll;
        this.name=s.name;
        this.score=s.score;
    }
}

public class p8{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter roll: ");
        int roll=sc.nextInt();
        sc.nextLine();
        System.out.println("Enter name: ");
        String name=sc.nextLine();
        System.out.println("Enter score: ");
        double score=sc.nextDouble();

        Student s1=new Student();
        System.out.println("Using no attributes: ");
        s1.printAttributes();
        
        Student s2=new Student(roll);
        System.out.println("\nUsing 1 attributes: ");
        s2.printAttributes();
        Student s3=new Student(roll,name);
        System.out.println("\nUsing 2 attributes: ");
        s3.printAttributes();
        Student s4=new Student(roll,name,score);
        System.out.println("\nUsing 3 attributes: ");
        s4.printAttributes();

        Student s5=new Student(s4);

        System.out.println("\nAfter Copy!");
        s5.printAttributes();
        sc.close();
    }
}
