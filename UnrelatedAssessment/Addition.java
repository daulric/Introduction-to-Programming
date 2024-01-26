import java.util.*;

class Addition {
    public static void main(String[] args) {
        int a, b, c, d;

        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter Value A: ");
            a = s.nextInt();
            System.out.println("Enter Value B: ");
            b = s.nextInt();
            System.out.println("Enter Value C: ");
            c = s.nextInt();
            System.out.println("Enter Value D: ");
            d =s.nextInt();
        }

        int num1 = (a + b);
        int num2 = (c + d);

        if (num1 > num2) {
            System.out.println(num1 + " is larger");
        } else {
            System.out.println(num2 + " is larger");
        }

    }
     
}