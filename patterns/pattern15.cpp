/* Increasing alphabet pattern
A 
B C 
D E F 
G H I J 
K L M N O
*/

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    char c ='A';

    for(int i=1; i<=n;i++){

        for(int j= 1; j<=i;j++){
            cout << c<< " ";
            c+=1;

        }

        cout<< endl;
    } 

  return 0;
}