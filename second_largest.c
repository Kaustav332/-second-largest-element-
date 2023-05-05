#include <stdio.h>

int main() {
    int array[] = {5, 8, 3, 1, 9, 2, 7, 4, 6};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int largest = array[0];
    int secondLargest = array[0];

    for (int i = 1; i < arraySize; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    printf("The second-largest element in the array is %d\n", secondLargest);
    return 0;
}
