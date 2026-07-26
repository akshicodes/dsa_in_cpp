#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    
    int original = num;  // Store the original number
    int reversed = 0;
    // int temp = num; //for reversal
    
    while (num != 0)
    {
        int rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }

    if(original==reversed){
        cout<<"yes, it is a palindrome";
    }

    return 0;
}