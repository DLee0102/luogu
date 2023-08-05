#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Gold
{
    int weight;
    int value;
};

// 交叉相乘防止精度问题
bool cmp(Gold x, Gold y)
{
    return x.value * y.weight > x.weight * y.value;
}

int main()
{
    int n = 0;
    int t = 0;
    double result = 0;

    Gold a[100];
    cin >> n >> t;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i].weight >> a[i].value;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i ++)
    {
        if (a[i].weight >= t)
        {
            result += a[i].value * 1.0 / a[i].weight * t * 1.0;     // 尤其小心强转问题，每一个小运算元都需要强转
            break;
        }
        result += a[i].value;
        t = t - a[i].weight;
    }

    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout << result;

    return 0;
}