#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int w = 0, l = 0;
    char a[2500 * 25] = {0};
    cin.get(a, 2500 * 25, 'E');

    for (int i = 0; a[i] != 0; i ++)
    {
        if (a[i] == 'W') w++;
        if (a[i] == 'L') l++;
        if (w >= 11 || l >= 11)
        {
            if (abs(w - l) >= 2)
            {
                cout << w << ":" << l << endl;
                w = 0;
                l = 0;
            }
        }
    }
    cout << w << ":" << l << endl << endl;
    w = 0; l = 0;

    for (int i = 0; a[i] != 0; i ++)
    {
        if (a[i] == 'W') w++;
        if (a[i] == 'L') l++;
        if (w >= 21 || l >= 21)
        {
            if (abs(w - l) >= 2)
            {
                cout << w << ":" << l << endl;
                w = 0;
                l = 0;
            }
        }
    }
    cout << w << ":" << l << endl;
    w = 0; l = 0;

}