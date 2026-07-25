#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    
    
    int original = num;  // Store the original number
    int sum =0;
    int mul=1;
    
    while (num)
    {
        int rem = num % 2; //taking the remainder out
        sum=sum+rem*mul; //sum will give the actual binary number
        num = num / 2; //dividing the number in half
        mul=mul*10; //incrementing the mul variable
    }
    cout<<"Binary number of: "<<original<<" is: "<<sum;

    

    return 0;
}