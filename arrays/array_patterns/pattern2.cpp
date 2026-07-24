/* 
3 13 12 7 4 
13 12 7 4 
12 7 4 
7 4 
4 */

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3,13,12,7,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j < n; j++)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}