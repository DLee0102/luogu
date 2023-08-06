#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l = 0;
    int m = 0;
    cin >> l >> m;

    vector<int> area(l + 1, 1);
    int u = 0;
    int v = 0;
    for (int i = 0; i < m; i ++)
    {
        cin >> u >> v;
        for (int j = u; j <= v; j ++)
        {
            area[j] = 0;
        }
    }

    int sum = 0;
    for (auto it = area.begin(); it != area.end(); it ++)
    {
        sum += *it;
    }
    cout << sum;
}