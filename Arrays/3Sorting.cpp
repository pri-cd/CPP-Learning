#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int *arr, int arrSize);
void bubbleSort(int *arr, int arrSize);

int main(int argc, char const *argv[])
{
    int arrSize = 10;
    int arr[10] = {98, 54, 56, 23, 67, 12, 34, 89, 90, 34};
    selectionSort(&arr[0], arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << (i != (arrSize - 1) ? ", ": ". \n");
    }
    return 0;
}


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



void bubbleSort(int *arr, int arrSize)
{

}