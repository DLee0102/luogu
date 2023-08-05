#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    int n = 0;
    int m = 0;
    int temp;
    cin >> n >> m;
    for (int i = 0; i < n; i ++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < m; i ++)
    {
        cin >> temp;
        cout << a[temp-1] << endl;
    }


    return 0;
}