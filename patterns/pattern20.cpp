/* Symmetric-Void Pattern
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include <iostream>
using namespace std;
int main()
{
    // upper crown
    for (int i = 0; i < 5; i++)
    {

        // stars
        for (int j = 5 - i - 1; j >= 0; j--)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j <= 2 * i + 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 5 - i - 1; j >= 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    //lower crown

    for(int i=0;i<5;i++){

        //stars
        for(int j=0;j<=i;j++){
            cout << "*";
        }

        // space
        for (int j = 0; j <= 2 * i + 1; j++)
        {
            cout << " ";
        }

        //stars
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
