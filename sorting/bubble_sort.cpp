// bubble sort
// 7,2,4,4,3,6,5



#include <iostream>
using namespace std;
int main()
{

    int arr[] = {7, 2, 4,4, 3, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j]> arr[j+1])
            {

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}

//bubble sort is a way of comparing elements in which the largest element is moved to the end of the array in each iteration. It works by repeatedly swapping adjacent elements if they are in the wrong order. The algorithm continues this process until the entire array is sorted.