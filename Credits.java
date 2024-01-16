import java.util.*;

public class Credits {

    public static void main(String[] args) {

        // Declaring Variables \\
        String Student_Name = ""; // Student Name variable
        double num_of_Credits; //Student Credits
        int required_credits; // Required credits! e.g IT Program
        String degree_program_name = ""; // Degree Program Variable

        // Gathering Data
        try ( Scanner s = new Scanner(System.in)) {
            System.out.print("Enter Student Name: ");
            Student_Name = s.nextLine();

            System.out.print("Enter Number of Credits: ");
            num_of_Credits = s.nextDouble();
            s.nextLine();

            System.out.print("Enter Required Credits: ");
            required_credits = s.nextInt();
            s.nextLine();

            System.out.print("Enter Degree Program: ");
            degree_program_name = s.nextLine();
        }

        // Calculating Data
        double needed_credits = ( required_credits - num_of_Credits );

        // Displating Info
        System.out.println(
            "\n==============================\n\n" +

            "Student Name: " + Student_Name +
            "\nDegree Program: " + degree_program_name +
            "\nRequired Credits: " + required_credits +
            "\nStudent Number of Credits: " + num_of_Credits +
            "\nCredits Needed to Meet Required Credits: " + needed_credits +

            "\n\n=============================="
        );

    }
}
