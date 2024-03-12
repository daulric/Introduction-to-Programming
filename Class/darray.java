import java.util.*;;

public class darray {
    public static void main(String[] args) {
        int [][] numbers = new int[3][2];

        try (Scanner s = new Scanner(System.in)) {
            for (int i =0; i < 3; i++) {
                for (int j = 0; j < 2; j++) {
                    numbers[i][j] = s.nextInt();
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.println("numbers[" + i + "][" + j + "] = " + numbers[i][j]);
            }
        }
        
    }
}

