#include <iostream>

using namespace std;

//Returns the index of the peak element in a mountain array
int peakIndexInMountainArray(int arr[], int n)
{
    int start = 0, end = n - 1, mid;

    //Binary Search
    while (start <= end)
    {
        //Prevents integer overflow
        mid = start + (end - start) / 2;

        //Peak element found
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return mid;

        //Increasing slope -> move right
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }

        //Decreasing slope -> move left
        else
            end = mid - 1;
    }

    // Peak not found
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int peak = peakIndexInMountainArray(arr, n);

    cout << "Peak Index in the Mountain Array is: " << peak << endl;

    return 0;
}