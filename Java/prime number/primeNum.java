import java.util.Scanner;

public class primeNum {
    public static boolean isPrime(int num){
        if (num <= 1) {
            return false;
        }
        if (num>1) {
            for (int i = 2; i < Math.sqrt(num); i++) {
                if (num % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        //Find a number prime or not
        /* int number = 11;
        if (isPrime(number)) {
            System.out.println("This is a prime number.");
        }
        else {
            System.out.println("This is not a prime number.");
        } */

        //Print 1 to 100 prime number
        System.out.println("Prime numbers between 1 and 100:");
        for (int i = 1; i <= 100; i++) {
            if (isPrime(i)) {
                System.out.print(i + " ");
            }
        }
    }
}
    