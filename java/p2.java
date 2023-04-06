//Write a program that accepts a number of command line parameters and displays the parameters and count of such parameters.
public class p2 {
    public static void main(String args[]){
        int count=0;
        System.out.println("the command-line arguments are: ");
        for(String str:args){
            count++;
            System.out.println(str);
        }
        System.out.println("count: "+count); 
    }
}
