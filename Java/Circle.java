import java.util.*;

public class Circle {

    static final double pi = 3.14159265; // PI Variable

    // This handles the inputs for the radius
    public static void main(String[] args) {

        try ( Scanner s = new Scanner(System.in) ) { // Creates a safe space for the Scanner
            System.out.print("Enter the Radius of the Circle: ");
            double radius = s.nextDouble();

            double Area =  ((radius * radius) * pi); // Area Calculation Function
            System.out.println("Area: " + Area); // Displaying the output
        }

    }
}