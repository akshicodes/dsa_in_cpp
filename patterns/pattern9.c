/*
3 	13 	12 	8 	4
3 	13 	12 	8 	4
3 	13 	12 	8 	4
3 	13 	12 	8 	4
3 	13 	12 	8 	4
*/

#include <stdio.h>

int main()
{
    int arr[] = {3, 13, 12, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", arr[j]);
        }
        printf("\n");
    }
    return 0;
}