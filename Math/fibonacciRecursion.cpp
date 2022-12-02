#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int num);

int main()
{
    int value;

    cout << "Enter the length for fibonacci: ";
    cin >> value;

    cout << endl
         << "The series is: ";

    int i = 0;
    while (i < value)
    {
        cout << " " << fibonacci(i);
        i++;
    }
    return 0;
}

int fibonacci(int num)
{
    if ((num == 1) || (num == 0))
    {
        return num;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
