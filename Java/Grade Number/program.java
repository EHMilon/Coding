import java.util.Scanner;

public class program {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your grade (0-100): ");
        int grade = input.nextInt();

        // Using switch statement to determine letter grade
        switch (grade / 10) {
            case 10:
            case 9:
                System.out.println("Your letter grade is A+");
                break;
            case 8:
                System.out.println("Your letter grade is A+");
                break;
            case 7:
                System.out.println("Your letter grade is A");
                break;
            case 6:
                System.out.println("Your letter grade is A-");
                break;
            case 5:
                System.out.println("Your letter grade is B");
                break;
            case 4:
                System.out.println("Your letter grade is C");
                break;
            case 3:
                System.out.println("Your letter grade is D");
                break;
            default:
                System.out.println("Your letter grade is F");
                break;

        }
    }
}
