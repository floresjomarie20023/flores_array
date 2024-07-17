#include <stdio.h>
#include <stdlib.h>
#include "floresJo_arrayops.h"

#define SIZED_MAX 20

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int size;
    char continue_choice;
    //Loop 
    while (1) {
    
    printf("Select your number to (1 to %d) :", SIZED_MAX);
    if (scanf("%d", &size) != 1) {
            printf("Invalid. Please enter a number not a Word or Letter\n"); 
            clear_buffer(); // If you press word or letter this will be the help
            printf("----------------------------------------------------------------\n");
            continue;
        }

    // Check if the number is greater than the Sized MAX which is 20.
    if (size > SIZED_MAX) {
        printf("Must be %d to below numbers.\n", SIZED_MAX);
        printf("----------------------------------------------------------------");
        printf("\n");
        continue;
    } else if (size <= 0) {
        printf("Must be Positive numbers pls\n");
        printf("----------------------------------------------------------------");
        printf("\n");
        continue;
    }

    // Memory for the array which is the #define SIZED_MAX 20
    int array[SIZED_MAX];

    // It reads the array in your input 
    printf("\t*You Select %d numbers*\n", size);
    for (int i = 0; i < size; i++) {
        printf("Number.%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("----------------------------------------------------------------");
    printf("\n");
    // Finding the maximum numbers
    int max = find_max(array, size);
    printf("\tYour maximum number is %d\n", max);
    printf("\n");
    
    // Find the minimum numbers
    int min = find_min(array, size);
    printf("\tYour minimum number is %d\n", min);
    printf("\n");
    
    // Calculates the average umber
    double avg = calculate_average(array, size);
    printf("\tThe Average is: %.2f\n", avg);
    printf("\n");
    
    // Sort the number to lowest to highest
    bubble_sort(array, size);
    printf("\tSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("Press 'x' if you wanna exit or Any key to continue: ");
        scanf(" %c", &continue_choice);
      printf("----------------------------------------------------------------");
       printf("\n");
        // Exit the loop if the user enters 'x'
        if (continue_choice == 'x' || continue_choice == 'X') {
        	printf("Thank you and Good Bye!");
            break;
        }
    }
  
    return 0;
}

