#include <iostream>
using namespace std;

pair<int, int> indexes(int arr[], int n, int x){
    int mid, start=0, end= n-1;
    int right_index=-1, left_index=-1;

    //right most index
    while(start <= end){

        mid= (start+ end)/2;

        if(arr[mid]==x){

            left_index= mid;
            end= mid-1;
        }
        else if(arr[mid]> x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    //right most index
    start = 0;
    end = n - 1;
    while(start <= end){

        mid= (start+ end)/2;

        if(arr[mid]==x){

            right_index= mid;
            end= mid-1;
        }
        else if(arr[mid]> x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return {left_index, right_index};

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

    pair<int, int> result = indexes(arr, n, key);
    cout << "Leftmost index: " << result.first << endl;
    cout << "Rightmost index: " << result.second << endl;

    return 0;
}