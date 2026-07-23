#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left= 0, right =0; //right -> sum of all the elements
    for (int i = 0; i < n; i++)
    {
        right += arr[i];
    }
    // cout << right;

    for( int i= 0; i<n; i++){

        
        right -= arr[i];

        if(left==right){
            cout << i+1;
        }

        left += arr[i];
    }
    return 0;
}
