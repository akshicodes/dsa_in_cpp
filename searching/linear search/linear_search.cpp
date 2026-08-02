#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    bool found=false;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"Element found in the array at index "<<i<<"."<<endl;
    }else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}