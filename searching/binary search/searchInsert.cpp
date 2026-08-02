#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int x){
    int low = 0;
    int high = n - 1;
    int index= -1;
    bool found = false;
    int mid;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == x)
        {
            index = mid;
            found = true;
            break;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found)
        cout << index << endl;
    else
        cout << low  << endl;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    binarySearch(arr, n, key);

    return 0;
}