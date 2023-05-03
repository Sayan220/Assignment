import java.util.*;
public class Metric {
    private static final double MILE_TO_KM = 1.5;
    
    public static double kmToMiles(double distance) {
        return distance / MILE_TO_KM;
    }
    
    public static double milesToKm(double distance) {
        return distance * MILE_TO_KM;
    }
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the distance in km: ");
        double distanceInKm = sc.nextDouble();
        double distanceInMiles = Metric.kmToMiles(distanceInKm);
        System.out.println(distanceInKm + " km = " + distanceInMiles + " miles");
        System.out.println("enter the distance in miles: ");
        distanceInMiles = sc.nextDouble();
        distanceInKm = Metric.milesToKm(distanceInMiles);
        System.out.println(distanceInMiles + " miles = " + distanceInKm + " km");
        sc.close();
    }
}
