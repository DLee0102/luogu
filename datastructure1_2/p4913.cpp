#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct BinaryNode
{
    int lc = 0;
    int rc = 0;
};

int ans = 0;

BinaryNode datanode[1000000];

void dfs(int id, int deep)
{
    if (id == 0) return;
    ans = max(ans, deep);
    dfs(datanode[id].lc, deep + 1);
    dfs(datanode[id].rc, deep + 1);
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        cin >> datanode[i].lc >> datanode[i].rc;
    }

    dfs(1, 1);
    cout << ans;
}