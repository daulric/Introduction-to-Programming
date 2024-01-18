import java.util.*;;

public class FeetToInches {

    static final double conversion = 12;

    public static void main(String[] args) {
        double feet_input;
        double Results;

        try ( Scanner s = new Scanner(System.in) ) {
            System.out.print("Enter the Number of Feet: ");
            feet_input = s.nextDouble();
        }

        Results = feetToInches(feet_input);
        System.out.println("Inches: " + Results);

    }

    public static double feetToInches(double feet) {
        return (feet * conversion);
    }

}