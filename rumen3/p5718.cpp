#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int min = 1000;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++)
    {
        if (a[i] <= min)
            min = a[i];
    }

    cout << min;
}