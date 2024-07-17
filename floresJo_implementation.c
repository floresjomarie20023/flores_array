#include "floresJo_arrayops.h"
// Implementation for the Maximum numbers
int find_max(int array[], int size) {
    int max = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
// Implementation for the minimum numbers
int find_min(int array[], int size) {
    int min = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
// Calculates the average of the numbers
double calculate_average(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}
// Sorting the all number to lowest to highest
void bubble_sort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(array[j] > array[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

