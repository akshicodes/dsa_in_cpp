#include <iostream>
using namespace std;
int main()
{

    int car[] = {2375, 7682, 2325, 2352};
    int fine[] = {250, 500, 350, 200};
    int total_fine = 0;
    int date;
    cout << "enter the date: ";
    cin >> date;
    int n = sizeof(car) / sizeof(car[0]);

    if (date % 2 == 1)
    {

        for (int i = 0; i < n; i++)
        {
            if (car[i] % 2 == 0)
            {
                total_fine = total_fine + fine[i];
            }
        }
    }
    if (date % 2 == 0)
        for (int i = 0; i < n; i++)
        {
            if (car[i] % 2 == 1)
            {
                total_fine = total_fine + fine[i];
            }
        }

    cout << "Total fine: " << total_fine;
    return 0;
}