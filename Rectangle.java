import java.util.Scanner;

public class Rectangle {

    public static void main(String[] args) {
        
        // Stores the value for Rectangle 1
        int width1;
        int length1;
        int Rectangle_Area_1;

        // Stores the value for Rectangle 2
        int width2;
        int length2;
        int Rectangle_Area_2;


        try ( Scanner s = new Scanner(System.in) ) {
            // Inputs for Rectangle 1
            System.out.println("============\nRectangle 1\n============\n");

            System.out.print("Input Width for Rectangle 1: ");
            width1 = s.nextInt();
            System.out.print("Input Length for Rectangle 1: ");
            length1 = s.nextInt();

            Rectangle_Area_1 = (length1 * width1);
            System.out.println("Rectangle 1 Area: " + Rectangle_Area_1);

            // Inputs for Rectangle 2
            System.out.println("\n============\nRectangle 2\n============\n");

            System.out.print("Input Width for Rectangle 2: ");
            width2 = s.nextInt();
            System.out.print("Input Length for Rectangle 2: ");
            length2 = s.nextInt();

            Rectangle_Area_2 = (length2 * width2);
            System.out.println("Rectangle 2 Area: " + Rectangle_Area_2);
            s.close();
        }

        System.out.println("\n====================\n");

        if (Rectangle_Area_1 == Rectangle_Area_2) {
            System.out.println("Both Rectangle Areas are the Same!");
        } else if (Rectangle_Area_1 >= Rectangle_Area_2) {
            System.out.println("Rectangle 1 Area is greater than Rectangle Area 2");
        } else if (Rectangle_Area_1 <= Rectangle_Area_2) {
            System.out.println("Rectangle 2 Area is greater than Rectangle Area 1");
        }

    }

}