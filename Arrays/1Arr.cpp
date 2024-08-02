#include <iostream>
#include <climits>
#define ERR_NONE 0

using namespace std;
int printAddressArr(int* arr, int arrSize);
void problemSolving();

int main(int argc, char const *argv[])
{
    int arr[10];
    int limiter = 4;
    /*
        @brief: The Allocated Memory is 4 * 10 which is 40 bytes!
        @brief: As soon as the array is declared the memory is allocated..
    */
   printAddressArr(arr, limiter);
   problemSolving();

    return 0;
}

int printAddressArr(int* arr, int arrSize)
{
    int err = ERR_NONE;
    cout << "Address: " << endl;

   for (int i = 0; i <= arrSize; i++)
   {
       cout << &arr[i];
       cout << (i != arrSize ? ", " : "\n");
   }

    return err;
}


/*
    @brief  : we're solving the Problem of maximum and minimum using Arrs!
    @input  : None.
    @return : None.
*/
void problemSolving()
{
    int arr[10];
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Arr Value[" << i << "]" << endl;
        cin >> arr[i];
    }


    for (int i = 0; i < 10; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "Max: " << maxNo << ", Min: " << minNo << " ." << endl;
}