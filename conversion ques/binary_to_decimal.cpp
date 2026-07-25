#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    
    
    int original = num;  // Store the original number
    int sum =0;
    int mul=0;
    
    while (num)
    {
        int rem = num % 10; //taking the remainder out
        sum=sum+rem*pow(2,mul); //sum will give the actual decimal number
        num = num / 10; //removing the last digit
        mul++; //incrementing the mul variable
    }
    cout<<"Binary number of "<<original<<" is: "<<sum;

    

    return 0;
}