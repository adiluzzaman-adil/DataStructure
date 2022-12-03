#include <iostream>
#include <cmath>
using namespace std;

/*The first element in the array is assumed to be sorted.
Take the second element and store it separately in key.
Compare key with the first element. If the first element is greater than key,
then key is placed in front of the first element. */

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertSort(int arr[], int size)
{

    for (int step = 1; step < size; step++)
    {

        int key = arr[step];
        int prev = step - 1;

        while (arr[prev] > key && prev >= 0)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = key;
    }
}

int main()
{
    int data[] = {9, 8, 7, 6, 3, 2, 1, 0};
    int size = sizeof(data) / sizeof(int);

    cout << "Input array is: ";
    printArray(data, size);

    insertSort(data, size);
    cout << endl
         << "Sorted array is: ";
    printArray(data, size);

    return 0;
}
