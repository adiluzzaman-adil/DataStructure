/* O(√n) Time Complexity, This loop will run for n-2 times */

#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int number);

int main()
{

    int num;
    cout << "Enter a number to chek Prime: ";
    cin >> num;

    int result = isPrime(num);

    if (result == 0)
    {
        cout << num << " is not a Prime number";
    }
    else
    {
        cout << num << " is a Prime number";
    }

    return 0;
}

int isPrime(int number)
{

    float limit = sqrt(number + 1);

    if (number <= 1)
    {
        return 0;
    }

    for (int i = 2; i < limit; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}