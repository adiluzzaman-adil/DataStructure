#include <iostream>
#include <cmath>
using namespace std;

/*  1. Fix a position in given array starting from index 0.
    2. Compare step 1 index 0 value with next the position.
    3. If value of next position < value of step 1 index 0, then swap it.
 */

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size)
{

    for (int i = 0; i <= size - 1; i++)
    {
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{

    int data[] = {12, 9, 8, 7, 6, 3, 2, 1, 0, 4, 5, 11, 10};
    int size = sizeof(data) / sizeof(int);

    cout << "Input array is: ";
    printArray(data, size);

    selectionSort(data, size);
    cout << endl
         << "Sorted array is: ";
    printArray(data, size);

    return 0;
}