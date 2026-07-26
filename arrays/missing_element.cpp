#include <iostream>
using namespace std;
int sumarr(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n=6;
    int arr[] = {1,3,4,5,6};
    int sumofNaturalNumber=(n*(n+1))/2;
    int sumOfArr=sumarr(arr,n);
    int miss=sumofNaturalNumber-sumOfArr;
    cout<<"missing value is: "<<miss;



}