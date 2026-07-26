#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 7, 1, 2, 3, 4};
    int i, n = 9;
    // we need to find the element that is not repeated 
    // doing that with XOR operation
    cout<<"\nThe unique elements found in the array are: ";
    int res=0;
    for(i=0;i<n;i++)
    {
        res=res^arr[i];
    }

    cout<<"\n The unique element is: ",res;


    return 0;
}
