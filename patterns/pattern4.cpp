
/*
4 8 13 11 3 
8 13 11 3 
13 11 3 
11 3 
3 
*/

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3,11,13,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i<n; i++)
    {

        for (int j = n-i-1; j>=0; j--)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}