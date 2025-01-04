# Sorting and Searching Visualizer

## Aim
To create a program that demonstrates sorting (using selection sort) and searching (using linear and binary search) algorithms on arrays.

---

## Algorithm

### Selection Sort
1. Loop through the array to find the minimum element in the unsorted portion.
2. Swap the minimum element with the first element of the unsorted portion.
3. Repeat until the array is sorted.

### Linear Search
1. Iterate through the array.
2. Compare each element with the target value.
3. Return the index if the target is found, otherwise return -1.

### Binary Search
1. Sort the array (if not already sorted).
2. Initialize `low`, `high`, and calculate `mid`.
3. If the middle element is the target, return its index.
4. If the target is less than the middle element, adjust `high`.
5. If the target is greater, adjust `low`.
6. Repeat until the target is found or the array is exhausted.

---

## Sample Run
```
Enter the size of the array: 5
Enter 5 elements: 10 20 30 40 50

--- Sorting and Searching Visualizer ---
1. Selection Sort
2. Linear Search
3. Binary Search
4. Exit
Enter your choice: 2
Enter the number to search (Linear): 20
20 found at index 1

--- Sorting and Searching Visualizer ---
1. Selection Sort
2. Linear Search
3. Binary Search
4. Exit
Enter your choice: 3
Enter the number to search (Binary): 10
10 found at index 0

--- Sorting and Searching Visualizer ---
1. Selection Sort
2. Linear Search
3. Binary Search
4. Exit
Enter your choice: 4
Exiting program...
```
