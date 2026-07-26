// The Euclidean Algorithm finds the GCD much faster in O(log(min(n1, n2))) time and is the standard method used in interviews and competitive programming.
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

int main()
{
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}
