#include <iostream>

using namespace std;

int findingRotationsbyRight(int arr[], int n){

    int start = 0;
        int end = n-1;

        while(start < end)
        {
            int mid = start + (end - start) / 2;

            if(arr[mid] > arr[end])
            {
                //Minimum lies on the right
                start = mid + 1;
            }
            else
            {
                //Minimum lies on the left (including mid)
                end = mid;
            }
        }

        return start; //start now points to the smallest element
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

    int rotations = findingRotationsbyRight(arr, n);
    cout << "No. of rotations by the right: " << rotations << endl;


    return 0;
}

/*
Find the smallest element using Binary Search.

arr[mid] > arr[end]  -> search right half.
arr[mid] <= arr[end] -> search left half (including mid).

The final index of the smallest element gives the number of rotations.
*/