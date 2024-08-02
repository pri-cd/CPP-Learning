#include <iostream>
#include <algorithm>
using namespace std;

#define ERR_NOT_FOUND   -1

int linearSrch(int *arr, int arrSize, int key);
int binarySrch(int *arr, int arrSize, int key);

int main(int argc, char const *argv[])
{
    int arr[10] = {10, 14, 32, 32, 45, 65, 7, 89, 63, 15};
    int key = 7;

    cout << "The Index of Key is: " << linearSrch(&arr[0], 10, key) << "." << endl;
    binarySrch(&arr[0], 10, key);
    return 0;
}

/*
    @brief: This Function is Linear Search Function!
    @input: array* 
    @input: arraySize
    @input: Key (What You Need to search)
    @retur: Index, else -1.
*/
int linearSrch(int *arr, int arrSize, int key)
{
    int errIndex = ERR_NOT_FOUND;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == key)
        {
            errIndex = i + 1;
            /*
                @brief: Adding + 1 here just, becuase Arrays start from zero instad of 1.
            */
        }
    }
    return errIndex;
}



/*
    @brief: Defining Local Function For Just Sorting the Arrays before we do Binary Search!
            Does Ascending Sorting!
    @input: array* 
    @input: arraySize
    @input: Key (What You Need to search)
    @retur: Index, else -1.
*/
void sorterArr(int *arr, int arrSize)
{  
    int tempVar = 0;
    bool swapped = false; 

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[i] < arr[j])
            {
                tempVar = arr[i];
                arr[i] = arr[j];
                arr[j] = tempVar;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int binarySrch(int *arr, int arrSize, int key)
{
    int errIndex = ERR_NOT_FOUND;
    /*
        Rather Than using this function, we can use In-built Function!
        sorterArr(&arr[0], arrSize);
    */

    sort(arr, arr+arrSize);

    int start = 0;
    int endpn = arrSize;

    while (start <= endpn)
    {
        int mid = (start + endpn)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        /* 
            @brief: Key is Greater Than The Mid Value, That Means we must've skipped the key
                    So, search the left half! else, Right Half!
        */
        if (arr[mid] > key)
        {
            endpn = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
    }
    cout << "Index: " << errIndex << endl;
    return errIndex;
}

