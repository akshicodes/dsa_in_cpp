#include <iostream>
using namespace std;

int main()
{
    int a= 10, b= 22;

    for (int i = a; i <= b; i++)
    {
        int count = 0;

        for (int j = 1; j <= b; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            cout << i << " ";
    }

    return 0;
}