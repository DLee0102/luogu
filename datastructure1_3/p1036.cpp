#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, k = 0;
long int a[20];
int counts = 0;

bool ifsushu(int n)
{
    // 即判断素数只需要判断n的平方根以内是否有符合条件的因数即可，因为n每对的因数总是以n的平方根为分界线分布的
    for (int i = 2; i * i < n; i ++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

// 深度优先搜索中大量使用静态变量
void dfs(int m, int sum, int startx)
{
    if (m == k)
    {
        if (ifsushu(sum)) counts ++;
    }
    // 此处采用不降法来排除组合中的重复情况，即每次选择的数的下标总是比上一次大
    for (int i = startx; i < n; i ++)
    {
        dfs(m + 1, sum + a[i], i + 1);
    }

    return;
}



int main()
{

    cin >> n >> k;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    dfs(0, 0, 0);
    cout << counts;
}