#include <iostream>
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[26] = {0};
    int maxn = 0;
    int minn = 100;
    int test = 0;
    bool ifprime = true;
    string str;

    cin >> str;
    for (int i = 0; i < str.size(); i ++)
    {
        a[str[i] - 'a'] ++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] <= minn)
                minn = a[i];
            if (a[i] >= maxn)
                maxn = a[i];
        }
    }
    test = maxn - minn;

    if (test == 0 || test == 1) ifprime = false;
    for (int i = 2; i < test; i++)
    {
        if (test % i == 0) ifprime = false;
    }

    if (ifprime)
    {
        cout << "Lucky Word" << endl << test;
    }
    else
    {
        cout << "No Answer" << endl << 0;
    }

    return 0;
}