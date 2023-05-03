import java.util.*;
public class BankAcc{
    private int accountNumber;
    private double balance;
    private static double interestRate; // static variable for interest rate
    
    public BankAcc(int accountNumber, double balance, double interestRate) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        BankAcc.interestRate = interestRate; // initialize the static interest rate
    }
    
    public void setInterestRate(double newInterestRate) {
        BankAcc.interestRate = newInterestRate;
    }
    
    public void displayInterestRate() {
        System.out.println("account number: "+ this.accountNumber);
        System.out.println("Interest rate: " + BankAcc.interestRate);
    }
    
    public double getBalance() {   //for balance
        return balance;
    }
    
    public double calculateInterest() {         //interest calculation
        return balance * (interestRate / 100.0);
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter account number: ");
        int accountNumber=sc.nextInt();
        System.out.println("enter balance: ");
        double balance=sc.nextDouble();
        BankAcc account = new BankAcc(accountNumber, balance, 2.5);

        account.displayInterestRate(); // display current interest rate
        System.out.println("enter new interest rate: ");
        double nerate=sc.nextDouble();
        account.setInterestRate(nerate); 
        account.displayInterestRate(); // display updated interest rate
          
        System.out.println("Balance: "+account.getBalance());
        double interest = account.calculateInterest();
        System.out.println("Interest earned: " + interest);
        sc.close();
    }
}
