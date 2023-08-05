#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * @brief 会超时，用优先队列解决
 * 
 * 
 * @return int 
 */
int main()
{
    int n = 0;
    int input_temp = 0;
    long int temp = 0;
    long int result = 0;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i ++)
    {
        cin >> input_temp;
        a.push_back(input_temp);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i ++)
    {
        temp = a[0] + a[1];
        a.erase(a.begin());
        a.erase(a.begin());
        if (!a.empty())
        {
            for (auto itr = a.begin(); itr != (a.end() + 1); itr ++)
            {
                if (itr == a.end())
                {
                    a.insert(a.end(), temp);
                    break;
                }
                if (temp <= *itr && temp > *(itr - 1))
                {
                    a.insert(itr, temp);
                    break;
                }
            }
        }

        result += temp;
    }

    cout << result;
}