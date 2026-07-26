// gcd-> greatest common divisor
// it means a factor which divides completely both the numbers which is actually a factor for both of them 
// TC:- O(min(n1, n2)) 

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n1,n2;
    cout <<"enter first number: ";
    cin >>n1;
    cout <<"enter second number: ";
    cin >>n2;
    int gcd=1;
    int small= min(n1,n2);

    for(int i=1;i<=small; i++){

        if(n1%i==0 && n2%i==0){

            gcd= i;
        }
        
    }

    cout <<"GCD OF "<< n1 <<" & "<<n2 <<" "<< "is: "<<gcd;
    

    return 0;
}