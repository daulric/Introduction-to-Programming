import java.util.*;

public class MassWeight {

    static double newton = 9.81; // 1kg = 9.81N

    public static void main(String[] args) {

        try ( Scanner mass_input = new Scanner(System.in); ) { // Safe space for scanner
            System.out.print("Enter Mass in Kg: ");
            double mass = mass_input.nextDouble(); // Get the user input for kg

            double conversion = (mass * newton); // Convert kg to newton

            if (conversion >= 1000) { // Check if its over 1000N
                System.out.println("Too Heavy\nNewton: "+ conversion + "N"); // Tell the user thats too heavy
            } else if  (conversion <= 10) { // Check if its less that 10
                System.out.println("Too Light\nNewton: "+ conversion + "N"); // Tell the user thats too light
            } else {
                System.out.println("Normal\nNewton: "+ conversion + "N");  // Tell the user thats normal
            }

        }

    }

}