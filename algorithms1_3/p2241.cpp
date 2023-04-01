#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     * @brief 注意数据的长度int的范围-32768～32767
     * long long int的范围
     * long int的范围
     * 
     */
    long int n = 0;
    long int m = 0;

    long int nperf = 0;
    long int msquare = 0;
    cin >> n >> m;
    for (int i = 0; i < n ; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            if ( i != j)
            {
                msquare += (n - i) * (m - j);
            }
            else
            {
                nperf += (n - i) * (m - j );
            }
        }
    }
    cout << nperf << " " << msquare;

    return 0;
}