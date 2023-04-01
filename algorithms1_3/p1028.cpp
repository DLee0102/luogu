#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 递归会超时，要用递推（动态规划）
long long counts = 0;
void autom(int n)
{
    counts ++;
    if (n == 1)
    {
        return ;
    }
    for (int i = 1; i <= n / 2; i ++)
    {
        autom(i);
    }
}

int main()
{
    int n = 0;
    cin >> n;
    autom(n);
    cout << counts;
    return 0;
}