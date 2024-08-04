#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int *arr, int arrSize);
void bubbleSort(int *arr, int arrSize);
void insertionSort(int *arr, int arrSize);


void printArr(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << (i != (arrSize - 1) ? ", ": ". \n");
    }
}

int main(int argc, char const *argv[])
{
    int arrSize = 10;
    int arr1[10] = {98, 54, 56, 23, 67, 12, 34, 89, 90, 34};
    int arr2[10] = {98, 54, 56, 23, 67, 12, 34, 89, 90, 34};
    int arr3[10] = {98, 54, 56, 23, 67, 12, 34, 89, 90, 34};
    
    selectionSort(&arr1[0], arrSize);
    bubbleSort(&arr2[0], arrSize);
    insertionSort(&arr3[0], arrSize);

    printArr(&arr1[0], arrSize);
    printArr(&arr2[0], arrSize);
    printArr(&arr3[0], arrSize);
    
    return 0;
}

/**
 * @brief: Sorts an array of integers in ascending order using the Selection Sort algorithm.
 *
 * Selection Sort is an in-place comparison-based sorting algorithm. 
 * It works by repeatedly finding the minimum element 
 * from the unsorted portion of the array and moving 
 * it to the beginning of the sorted portion.
 * 
 * The algorithm divides the array into two parts: the sorted portion 
 * (initially empty) and the unsorted portion (the entire 
 * array at the start). It then repeatedly selects the smallest element 
 * from the unsorted portion and swaps it with the 
 * first unsorted element, thereby expanding the sorted portion.
 * 
 * The process is as follows:
 * 1. Start from the beginning of the array and assume the first element is the minimum.
 * 2. Compare this element with the rest of the array to find the actual minimum.
 * 3. Swap the minimum element found with the first unsorted element.
 * 4. Move the boundary of the sorted portion one step to the right.
 * 5. Repeat the process until the unsorted portion is empty.
 *
 * @param arr: Pointer to the array of integers to be sorted.
 * @param arrSize: The number of elements in the array.
 */

void selectionSort(int *arr, int arrSize)
{
    /* @brief: Find the minimum element in this unsorted arr! */
    int minIndex, temp;

    /* @brief: A loop from 0th till second Last element! */
    for (int i = 0; i < arrSize - 1; i++)
    {
        minIndex = i;
        /* @brief: A loop from Fist Second Element Till the end of Array! */
        for (int j = i+1; j < arrSize; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        /* @brief: Swapping Logic!- */
        if (minIndex != i)
        {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}



/**
 * @brief: Sorts an array of integers in ascending order using the Bubble Sort algorithm.
 *
 * Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the array,
 * compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until
 * no swaps are needed, indicating that the array is sorted.
 * 
 * The algorithm repeatedly passes through the array, and with each pass, the largest unsorted element "bubbles"
 * up to its correct position.
 *
 * @param arr: Pointer to the array of integers to be sorted.
 * @param arrSize: The number of elements in the array.
 * @attention: "Swapped" flag to check if any elements were swapped during the current pass
 *              no swaps occur, the array is already sorted, and we can terminate early 
 *              to optimize performance.
 */

void bubbleSort(int *arr, int arrSize)
{
    int temp = 0;
    bool swapped;
   
   
    /* This is the outer loop to traverse the whole Array! */
    for (int i = 0; i < arrSize; i++)
    {
        swapped = false; 
        /* @brief: "arrSize - i -1" This is because, We were hitting the outside of Array!! */
        for (int j = 0; j < arrSize - i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no elements were swapped during the current pass,
        // it indicates that the array is already sorted. We can then exit the loop early
        // to avoid unnecessary further passes and improve efficiency.
        if (!swapped)
        {
            break;
        }
    }
}

/**
 * @brief: Sorts an array of integers in ascending order using the Insertion Sort algorithm.
 *
 * Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array
 * one item at a time. It works similarly to the way you might sort playing cards in your hands.
 * The algorithm iterates through the array, and for each element, it places it in its correct position
 * in the already sorted part of the array.
 * 
 * The algorithm divides the array into a sorted and an unsorted region. It repeatedly takes the first 
 * unsorted element and inserts it into the sorted region at the correct position.
 *
 * @param arr: Pointer to the array of integers to be sorted.
 * @param arrSize: The number of elements in the array.
 *
 * @attention: This algorithm is efficient for small data sets and mostly sorted arrays.
 *             It has an average and worst-case time complexity of O(n^2).
 *             It is stable (does not change the relative order of elements with equal keys)
 *             and is in-place (requires only a constant amount of extra space).
 */

/**
 * @brief Sorts an array of integers in ascending order using the Insertion Sort algorithm.
 *
 * Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time.
 * It works by repeatedly taking the next element from the unsorted portion and inserting it into its correct position 
 * in the sorted portion of the array. This is done by comparing the current element with elements in the sorted portion 
 * and shifting the larger elements to the right.
 *
 * The algorithm is efficient for small or nearly sorted arrays but can be less efficient for larger or completely unsorted arrays.
 *
 * @param arr Pointer to the array of integers that needs to be sorted.
 * @param arrSize The number of elements in the array.
 *
 * The algorithm works as follows:
 * 1. Starts with the second element (index 1) because a single element is trivially sorted.
 * 2. Takes the current element (curr) and compares it to elements in the sorted portion (arr[0..i-1]).
 * 3. Shifts elements in the sorted portion that are greater than curr to the right.
 * 4. Inserts the current element (curr) into its correct position.
 *
 * The nested loops ensure that each element is correctly placed in the sorted portion of the array.
 */
void insertionSort(int *arr, int arrSize)
{
    int curr = 0;  // Variable to store the current element being inserted
    int j = 0;     // Variable to find the correct position for curr

    // Loop through each element in the array starting from the second element
    for (int i = 1; i < arrSize; i++)
    {
        curr = arr[i];  // Store the current element
        // Compare the current element with elements in the sorted portion of the array
        for (j = i - 1; (arr[j] > curr && j >= 0); j--)
        {
            // Shift elements that are greater than curr to the right
            arr[j + 1] = arr[j];
        }
        // Insert the current element into its correct position
        arr[j + 1] = curr;
    }
}