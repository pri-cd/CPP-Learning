#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int *arr, int arrSize);
void bubbleSort(int *arr, int arrSize);



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

    selectionSort(&arr1[0], arrSize);
    bubbleSort(&arr2[0], arrSize);


    printArr(&arr1[0], arrSize);
    printArr(&arr2[0], arrSize);
    
    return 0;
}

/**
 * @brief: Sorts an array of integers in ascending order using the Selection Sort algorithm.
 *
 * Selection Sort is an in-place comparison-based sorting algorithm. It works by repeatedly finding the minimum element 
 * from the unsorted portion of the array and moving it to the beginning of the sorted portion.
 * 
 * The algorithm divides the array into two parts: the sorted portion (initially empty) and the unsorted portion (the entire 
 * array at the start). It then repeatedly selects the smallest element from the unsorted portion and swaps it with the 
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
 * @attention: no swaps occur, the array is already sorted, and we can terminate early to optimize performance
 */

void bubbleSort(int *arr, int arrSize)
{
    int temp = 0;
    bool swapped;
   
   
    /* This is the outer loop to traverse the whole Array! */
    for (int i = 0; i < arrSize; i++)
    {
        swapped = false; 
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

