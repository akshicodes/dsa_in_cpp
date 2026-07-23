
// 3 13 12 11 8 
// 3 13 12 11 
// 3 13 12 
// 3 13 
// 3



#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3, 13, 12, 11, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

            for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}