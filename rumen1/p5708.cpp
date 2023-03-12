#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double size = 0;
    double p = 0;

    cin >> a >> b >> c;
    p = ( a + b + c ) / 2;
    size = pow(p * (p - a) * (p - b) * (p - c), 0.5);

    cout.setf(ios_base::fixed);
    cout.precision(1);
    cout << size;
}