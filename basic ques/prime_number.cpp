#include <iostream>
using namespace std;

void isPrime(int n){
    int count=0;
    if(n<2)
    return;

    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            return;
        }
        
        cout << n <<" ";
        
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements:";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Prime numbers in the array are: ";
    for(int i=0;i<n;i++){

        isPrime(arr[i]);
    }


    delete[] arr;


}