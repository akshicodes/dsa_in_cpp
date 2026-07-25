/*
E 

D E 

C D E 

B C D E 

A B C D E
*/

#include<iostream>
using namespace std;
int main(){

    for(int i=0;i<5;i++){
        for(char c= 'E'-i; c<='E';c++){
            cout << c << " ";
        }

        cout << endl;
    }

    return 0;
}