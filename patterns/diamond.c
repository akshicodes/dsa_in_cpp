#include <stdio.h>
int main()
{
    int i, j, sp, n;
    printf("enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (sp = 0; sp<n-i-1; sp++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
       for (sp = 0; sp < n - i; sp++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
     
}