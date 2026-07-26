#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact= fact *i;

    }
    return fact;
}

int main(){
    int number;
    cout<<"enter a number: ";
    cin >> number;
    int ans= factorial(number);

    cout << "factorial of a number is: "<<ans;
    return 0;

}