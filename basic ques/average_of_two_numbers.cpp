#include <iostream>
using namespace std;

void average(int a, int b)
{

    int avg= (a+b)/2;
    cout <<"Average is: "<< avg;
}

int main()
{
    int num1,num2;
    cout<<"enter first number: ";
    cin>> num1;
    cout<<"enter second number: ";
    cin >> num2;

    average(num1,num2);
    return 0;
}