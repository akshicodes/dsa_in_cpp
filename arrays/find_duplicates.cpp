#include <vector>
#include <iostream>
using namespace std;

vector<int> duplicates(int arr[], int size)
{

    vector<int> arr2;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr2.push_back(arr[i]);
                break;
            }
        }
    }

    if (arr2.empty())
    {
        arr2.push_back(-1);
    }

    return arr2;
}

int main()
{

    int arr[] = {0, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = duplicates(arr, n);

    for (int x : ans)
    {
        cout << x << " ";
    }
}
