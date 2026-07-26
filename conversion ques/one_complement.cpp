#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    
    
    int original = num;
    int ans = 0;
    int place = 1;

    while (num)
    {
        int rem = num % 10;
        rem = rem ^ 1;          // Flip the bit

        ans += rem * place;     // Place it at the correct position like 10s,100s,1000s

        place *= 10; //incrementing it by each loop
        num /= 10;
    }

    cout << "1's complement of " << original << " is " << ans;
}