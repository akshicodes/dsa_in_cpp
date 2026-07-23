/*
4 	8 	12 	13 	3
4 	8 	12 	13 	3
4 	8 	12 	13 	3
4 	8 	12 	13 	3
4 	8 	12 	13 	3
*/

// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[] = {3, 13, 12, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d \t", arr[j]);
        }
        printf("\n");
    }
    return 0;
}