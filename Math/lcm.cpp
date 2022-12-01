#include <iostream>
#include <cmath>
using namespace std;

int getLCM(int num1, int num2);

int main()
{
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int result = getLCM(num1, num2);

    cout << endl
         << "The LCM is: " << result;

    return 0;
}

int getLCM(int num1, int num2)
{

    int maxNum = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (maxNum % num1 == 0 && maxNum % num2 == 0)
            break;
        else
            maxNum++;
    }

    return maxNum;
}