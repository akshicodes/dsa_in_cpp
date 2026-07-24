/*
4 7 12 13 3 
4 7 12 13 3 
4 7 12 13 3 
4 7 12 13 3 
4 7 12 13 3  */

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3,13,12,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 5; i++)
    {

        for (int j = n-1; j>=0; j--)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}