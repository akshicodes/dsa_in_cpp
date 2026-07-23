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

    for (int i = 0; i < n; i++)
    {
        if (date % 2 != car[i] % 2)
        { // 0!=1 -> true
            // 1!=0 -> true
            total_fine += fine[i];
        }
        total_fine += fine[i];
    }

    cout << "Total fine: " << total_fine;
    return 0;
}

/*
date    car
0       0 -> no
0       1 -> yes/true even date odd car
1       0 -> yes/true odd date even car
1       1 -> no
*/