#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int a[32];
    int i = 0;

    while(num > 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
    return 0;    
}