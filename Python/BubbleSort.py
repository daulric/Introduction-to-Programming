def bubble_sort(array):
    for i in range(len(array)):
        for j in range(i+1, len(array)):
            if array[i] > array[j]:
                temp = array[i]
                array[i] = array[j]
                array[j] = temp
    
    return array

x = [1, 2, 34, 782, 4, 5, 9, -8, -9]
print(x)
print(bubble_sort(x))
