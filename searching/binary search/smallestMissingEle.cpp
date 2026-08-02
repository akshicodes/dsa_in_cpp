#include <iostream>

using namespace std;
// find the smallest missing non-negative integer in a sorted array where values are distinct and increasing
int smallesMissingEle(int arr[], int n)
{
    int start = 0, end = n - 1, mid, index= -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid < arr[mid])
        { // mismatch condition
            index = mid;
            end = mid - 1;
        }
        else
        { // match condition when mid matches the array ele
            index = mid + 1;
            start = mid + 1;
        }
    }
    return index;
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

    int missing_ele = smallesMissingEle(arr, n);
    cout << "The smallest missing element in the array is: " << missing_ele << endl;

    return 0;
}