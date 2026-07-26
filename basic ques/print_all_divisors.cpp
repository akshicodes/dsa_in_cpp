#include <iostream>
using namespace std;
int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout<<"divisors of "<< num << " are : ";
    for(int i = 1; i <num; i++){
        if(num%i == 0){
            cout << i << " ";
        }
    }
     
    return 0;
}