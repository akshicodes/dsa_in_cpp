/* Reverse Letter Triangle Pattern       
ABCDE       
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    

    for(int i=0; i<n;i++){

        for(char c ='A';c <'A' +(n-i);c++){ //'A' + 5-0= 'A' +5 = 70
            cout << c<< " ";
        }

        cout<< endl;
    } 

  return 0;
}
/*
65 66 67 68 69
65 66 67 68 
65 66 67 
65 66 
65 
*/