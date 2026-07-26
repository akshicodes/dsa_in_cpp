#include <iostream>
using namespace std;

int main() {
    int num = 23689;
    int count = 0;
    int temp = num;
    
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }
    }
    
    cout << "Number of digits in " << num << " is: " << count << endl;
    return 0;
}