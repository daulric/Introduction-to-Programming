
import java.util.Scanner;

public class Circle {

    static double pi = 3.14159265; // PI Variable

    // This handles the inputs for the radius
    public static void main(String[] args) {

        try ( Scanner scanner = new Scanner(System.in) ) { // Creates a safe space for the Scanner
            
            System.out.print("Enter the Radius of the Circle: ");
            int radius = scanner.nextInt(); // User Inputs Radius
            double Area =  ((radius * radius) * pi); // Area Calculation Function

            System.out.println("Area: " + Area);
        }
    }
}