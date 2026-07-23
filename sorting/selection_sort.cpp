// selection sort
/* dry run
1 7 3 8 5

0 -> 1 | 7 3 8 5
1 -> 1 3 | 7 8 5
2 -> 1 3 5 | 8 7
3 -> 1 3 5 7 | 8
4 -> 1 3 5 7 8 |
*/

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 7, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int index = i; // index of the minimum element
        for (int j = i + 1; j < n; j++)
        { // comparing the arr[index] with arr[index+1]
            if (arr[j] < arr[index])
            {
                index = j; // update the index of the minimum element
            }

            int temp = arr[index]; // swap the minimum element with the first element of the unsorted array
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//selection sort is a simple comparison-based sorting algorithm. It works by repeatedly finding the minimum element from the unsorted part of the array and moving it to the beginning. The algorithm maintains two subarrays in a given array:
//1. The subarray which is already sorted.
//2. The remaining subarray which is unsorted.