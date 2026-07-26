#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    
    int original = num;  // Store the original number
    int reversed = 0;
    
    while (num != 0)
    {
        int rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }

    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversed << endl;
    return 0;
}