#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
struct coordinate
{
    double x;
    double y;
};


double getDistance(coordinate* cdt1, coordinate* cdt2);

int main()
{
    double length;
    coordinate cdt[3];
    for (int i = 0; i < 3; i ++)
    {
        cin >> cdt[i].x >> cdt[i].y;
    }
    length = getDistance(&cdt[0], &cdt[1]) + getDistance(&cdt[1], &cdt[2]) + getDistance(&cdt[0], &cdt[2]);
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout << length;

    return 0;

}

double getDistance(coordinate* cdt1, coordinate* cdt2)
{
    double length = pow(pow(cdt2->x - cdt1->x, 2) + pow(cdt2->y - cdt1->y, 2), 0.5);
    return length;
}