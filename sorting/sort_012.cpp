#include<iostream>
using namespace std;
int main(){

    int arr[]={2,1,0,1,0,1,2,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int count_zero= 0, count_one=0, count_two=0;

    for(int i=0; i<n;i++){

        if(arr[i]== 0){ count_zero++;}
        else if(arr[i]==1){count_one++;}
        else { count_two++;}
    }

    for(int i= 0; i<count_zero; i++){
        arr[i]=0;
    }

    for(int i= count_zero; i<count_one+count_zero; i++){
        arr[i]=1;
    }

    for(int i= count_one+count_zero;i<n;i++){
        arr[i]=2;
    }

    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
    cout<<endl;
    cout << " no of zeros: "<< count_zero<<endl;
    cout << " no of ones: "<< count_one<<endl;
    cout << " no of twos: "<< count_two<<endl;

    return 0;
}