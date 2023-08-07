#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string midorder, frontorder;
void dfs(int midstart, int midend, int frontstart, int frontend)
{
    if (midstart > midend || frontstart > frontend) return;
    for (int i = midstart; i < midend; i ++)
    {
        if (midorder[i] == frontorder[frontstart])
        {
            dfs(midstart, i - 1, frontstart + 1, frontstart + i - midstart);
            dfs(i + 1, midend, i + frontstart - midstart + 1, frontend);
            cout << midorder[i];
        }
    }
}

int main()
{
    cin >> midorder >> frontorder;
    int l = midorder.size();
    dfs(0, l, 0, l);
}