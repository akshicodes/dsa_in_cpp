/* Binary Number Triangle Pattern

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

--findings:
-> even rows start with 1
-> odd rows start with 0
-> logic or the inner loop follows right angled pattern

*/

#include <iostream>
using namespace std;
int main(){

    for(int i=0; i<5;i++){
        int start =0;
        if(i%2==0) start =1;
        else start =0;
        for(int j=0;j<=i;j++){

            cout<<start <<" ";
            start= 1 - start; //for next 0 or 1 value
        }
        cout<<endl;
    }

    return 0;
}