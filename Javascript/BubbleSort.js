function BubbleSort(array) {
    for (let i = 0; i < array.length; i++) {
        for (let j = i+1; j < array.length; j++) {
            if (array[i] > array[j]) {
                let temp = array[i]
                array[i] = array[j]
                array[j] = temp
            }
        }
    }

    return array
}

let array = [1,4,2,4,21,0]
console.log(array)
let sortedArray = BubbleSort(array)
console.log(sortedArray)
