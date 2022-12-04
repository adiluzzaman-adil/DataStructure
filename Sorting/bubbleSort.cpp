#include <iostream>
#include <cmath>
using namespace std;

/*  1. Starting from the first index, compare the first and the second elements.
    2. If the first element is greater than the second element, they are swapped.
    3. Now, compare the second and the third elements. Swap them if they are not in order.
    4. The above process goes on until the last element. */

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{

    for (int step = 0; step < size; step++)
    {
        for (int j = 0; j <= size - step; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
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

    bubbleSort(data, size);
    cout << endl
         << "Sorted array is: ";
    printArray(data, size);

    return 0;
}
