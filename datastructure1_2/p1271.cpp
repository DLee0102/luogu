#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 冒泡排序: i记录已排序列数，j处理每次从未排侧找出最小数接在已排序列上; Too Slow!!
// int main()
// {
//     int n = 0;
//     int m = 0;
//     cin >> n >> m;
//     int ms[2000000];
//     for (int i =0; i < m; i ++)
//     {
//         cin >> ms[i];
//     }

//     for (int i = 0; i < m; i ++)
//     {
//         for (int j = m - 1; j > i; j --)
//         {
//             if (ms[j - 1] >= ms[j])
//             {
//                 int temp = 0;
//                 temp = ms[j];
//                 ms[j] = ms[j - 1];
//                 ms[j - 1] = temp;
//             }
//         }
//     }
//     for (int i =0; i < m; i ++)
//     {
//         cout << ms[i] << " ";
//     }

// }

// 桶排
int main()
{
    int a[1000] = {0};
    int n = 0;
    int m = 0;
    int temp = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i ++)
    {
        cin >> temp;
        a[temp] ++;
    }
    for (int i = 0; i <= n; i ++)
    {
        if (a[i] != 0)
        {
            while (a[i] != 0)
            {
                cout << i << " ";
                a[i] --;
            }
        }
    }
}