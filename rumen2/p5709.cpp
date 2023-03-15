#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m = 0;
    int t = 0;
    int s = 0;
    int result = 0;

    cin >> m >> t >> s;
    if (t != 0)
    {
        if (s % t == 0)
            result = m - (s / t);
        else
            result = m - (s / t) - 1;
    }
    else
    {
        result = 0;
    }
    if (result < 0)
        result = 0;

    cout << result;
    return 0;
}