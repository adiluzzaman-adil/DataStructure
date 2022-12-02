#include <iostream>
#include <cmath>
using namespace std;

double factorial(int value);

int main()
{
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    double ncr = factorial(n) / (factorial(r) * factorial(n - r));

    cout << endl
         << "The value of ncr is: " << ncr;

    return 0;
}

double factorial(int value)
{

    double calculatedValue = 1;
    while (value >= 1)
    {
        calculatedValue = calculatedValue * value;
        value--;
    }

    return calculatedValue;
}
