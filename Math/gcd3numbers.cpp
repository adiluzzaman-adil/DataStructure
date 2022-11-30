#include <iostream>
#include <cmath>
using namespace std;

int getGCD(int num1, int num2);

int main()
{
    int num1, num2, num3;

 cout<<"Enter first number: ";
 cin >> num1;

 cout<<"Enter second number: ";
 cin >> num2;

  cout<<"Enter third number: ";
 cin >> num3;


int result = getGCD(num3,getGCD(num1,num2));

 cout <<endl<< "The GCD is: "<< result;

return 0;

}

int getGCD(int num1, int num2){

    if(num1%num2 ==0) return num2;
    else return getGCD(num2, (num1%num2));
}
