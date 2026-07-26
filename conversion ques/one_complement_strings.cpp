#include <iostream>
using namespace std;

int main()
{
    string num;
    cout<<"enter a number: ";
    cin>>num;
    

    for (char &bit : num)
    {
        bit = (bit == '0') ? '1' : '0';
    }

    cout << "1's complement is: " << num;
    return 0;
}