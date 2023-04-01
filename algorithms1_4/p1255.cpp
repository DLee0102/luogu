#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * @brief 要用高精加法
 * 
 */

// 用递归会超时
// void atom(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         counts ++;
//         return ;
//     }
//     atom(n - 1);
//     atom(n - 2);
// }

long long numWays(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    long long a = 1;
    long long b = 2;
    long long temp = 0;
    for (int i = 3; i <= n; i ++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return temp;
}


int main()
{
    long long counts = 0;
    int n = 0;
    cin >> n;
    counts = numWays(n);

    cout << counts;

    return 0;
}