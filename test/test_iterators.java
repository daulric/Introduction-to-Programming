package test;
public class test_iterators {

    public static void Hello(int num) {
        System.out.println(num + ". Hello");
    }

    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            Hello(i);
        }
    }
}