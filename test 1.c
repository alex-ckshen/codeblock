#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

int main() {
    int n;  // Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check for valid input size
    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int input[MAX_SIZE];  // Array to store numbers
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);  // Read each number
    }

    // Insertion Sort
    for (int current_sort = 1; current_sort < n; current_sort++) {
        int key = input[current_sort];  // The element to insert
        int j = current_sort - 1;      // Last index of sorted portion

        // Shift elements to the right while they are bigger than key
        while (j >= 0 && input[j] > key) {
            input[j + 1] = input[j];  // Move larger element one position right
            j--;                      // Check the previous element
        }

        // Place key in its correct position
        input[j + 1] = key;

        // Optional: Print the array after each insertion to see progress
        printf("After step %d: ", current_sort);
        for (int k = 0; k < n; k++) {
            printf("%d ", input[k]);
        }
        printf("\n");
    }

    // Print final sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}
