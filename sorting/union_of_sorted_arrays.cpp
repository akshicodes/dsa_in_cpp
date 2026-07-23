#include <iostream>
using namespace std;
int main(){

    int arr1[]={2,2,3,4,5};
    int arr2[]={1,1,2,3,4};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+m];


        for(int j=0;j<m+n;j++){

            if(arr1[j]==arr2[j] ){
                // if(i==j){
                arr3[j] = arr1[j];

            
            }
            else{
                arr3[j] = arr1[j];
            }
        }
        int x= max(m,n);
    
    for(int i=0;i<x;i++){
        cout<<arr3[i]<<" ";
    }
}