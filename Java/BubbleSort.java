class BubbleSort {

    public int[] bubble_sort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        return arr;
    }

    public static void main(String[] args) {
        int[] array = {1, 6, 3, 8, 9, 2, 10, 278};

        for (int i=0; i < array.length; i++) {
            System.out.println(array[i]);
        }

        System.out.println("===================");

        BubbleSort sorter = new BubbleSort();
        sorter.bubble_sort(array);
        
        for (int i=0; i < array.length; i++) {
            System.out.println(array[i]);
        }

    }
}