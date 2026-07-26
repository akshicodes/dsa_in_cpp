//armstrong number:
// when cube of each digits is equal to the actual number
// like: 1634-> 1^3 +6^3+3^3+4^3= 1634

#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int num;
    cout<<"enter a number: ";
    cin >> num;
    int original= num;
    int sum=0;
    int count =0;
     int temp = num;
    while(temp>0){
        temp/=10;
        count++;
    }

    while(num>0){

        int rem=num%10;

        sum= sum+ pow(rem,count) ;
        num=num/10;

    }
    if(sum==original){
        cout<<original<<" is an Armstrong number!";
    }
    else
    cout <<"not an armstrong number :(";
}