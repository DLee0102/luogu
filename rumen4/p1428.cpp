#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int a[100];
    int b[100];
    cin >> n;

    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }

    b[0] = 0;
    for (int i = 1; i < n; i ++)
    {
        int result = 0;
        for (int j = 0; j < i; j ++)
        {
            if (a[j] < a[i])
                result ++;
        }
        b[i] = result;
    }

    for (int i = 0; i < n; i ++)
    {
        cout << b[i] << " ";
    }
}