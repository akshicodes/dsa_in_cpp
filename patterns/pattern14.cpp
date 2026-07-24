/* Alphabetical Right Angled Pattern
A
A B
A B C
A B C D
A B C D E
*/

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    

    for(int i=0; i<n;i++){

        for(char c ='A';c <= 'A' +i;c++){
            cout << c<< " ";
        }

        cout<< endl;
    } 

  return 0;
}