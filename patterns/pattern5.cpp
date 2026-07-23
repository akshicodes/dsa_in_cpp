#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3,13,12,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i<n; i++)
    {

        for (int j = n-1; j>=i; j--)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}