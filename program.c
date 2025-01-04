#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void selectionSort(int arr[], int size);
int linearSearch(int arr[], int size, int target);
int binarySearch(int arr[], int low, int high, int target);
void displayArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE], size, choice, target, result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n--- Sorting and Searching Visualizer ---\n");
        printf("1. Selection Sort\n");
        printf("2. Linear Search\n");
        printf("3. Binary Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Original Array: ");
                displayArray(arr, size);
                selectionSort(arr, size);
                printf("Sorted Array: ");
                displayArray(arr, size);
                break;

            case 2:
                printf("Enter the number to search (Linear): ");
                scanf("%d", &target);
                result = linearSearch(arr, size, target);
                if (result != -1)
                    printf("%d found at index %d\n", target, result);
                else
                    printf("%d not found in the array\n", target);
                break;

            case 3:
                printf("Enter the number to search (Binary): ");
                scanf("%d", &target);
                selectionSort(arr, size); // Ensure the array is sorted for binary search
                result = binarySearch(arr, 0, size - 1, target);
                if (result != -1)
                    printf("%d found at index %d\n", target, result);
                else
                    printf("%d not found in the array\n", target);
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Target not found
}

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
