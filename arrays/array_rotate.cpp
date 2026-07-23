//aka cyclic rotate by one
//rotating the array by one position in clockwise direction

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {9,8,7,6,4,2,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n - 1];

    for (int i = n - 1; i >0; i--)
    {

        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}