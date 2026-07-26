//O(log(min(a, b)))

#include <iostream>

using namespace std;

int gcd(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b %= a;
    }
    if (a == 0)
    {
        return b;
    }
    else
        return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM = " << lcm(a, b);
}
