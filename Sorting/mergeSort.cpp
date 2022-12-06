#include <iostream>
#include <cmath>
using namespace std;

/*  1. Fix a position in given array starting from index 0.
    2. Compare step 1 index 0 value with next the position.
    3. If value of next position < value of step 1 index 0, then swap it.
 */

// To Print the Array
void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int firstIndex, int midIndex, int lastIndex)
{
    int numberOfElFirstHalf = midIndex - firstIndex + 1;
    int numberOfElSecondHalf = lastIndex - midIndex;

    int firstArray[numberOfElFirstHalf], secondArray[numberOfElSecondHalf];

    for (int i = 0; i < numberOfElFirstHalf; i++)
    {
        firstArray[i] = arr[firstIndex + i];
    }
    for (int j = 0; j < numberOfElSecondHalf; j++)
    {
        secondArray[j] = arr[midIndex + 1 + j];
    }

    int i = 0, j = 0, k = firstIndex;

    while (i < numberOfElFirstHalf && j < numberOfElSecondHalf)
    {
        if (firstArray[i] <= secondArray[j])
        {
            arr[k] = firstArray[i];
            i++;
        }
        else
        {
            arr[k] = secondArray[j];
            j++;
        }

        k++;
    }

    while (i < numberOfElFirstHalf)
    {
        arr[k] = firstArray[i];
        i++;
        k++;
    }

    while (j < numberOfElSecondHalf)
    {
        arr[k] = secondArray[j];
        j++;
        k++;
    }
}

// To divide the array into two sub arrays
void mergeSort(int arr[], int firstIndex, int lastIndex)
{

    if (firstIndex < lastIndex)
    {
        int midIndex = (firstIndex + (lastIndex - 1)) / 2;
        mergeSort(arr, firstIndex, midIndex);
        mergeSort(arr, midIndex + 1, lastIndex);

        merge(arr, firstIndex, midIndex, lastIndex);
    }
}

int main()
{

    int data[] = {12, 9, 8, 7, 6, 15, 0, 11, 19, 40};
    int size = sizeof(data) / sizeof(int);

    int first, last, mid;
    first = 0;
    last = size;

    cout << "Input array is: ";
    printArray(data, size);

    mergeSort(data, first, last);
    cout << endl
         << "Sorted array is: ";
    printArray(data, size);

    return 0;
}
