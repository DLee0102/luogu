#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 用栈更简单
int main()
{
    int a[100];
    int index = 0;
    int temp = 0;
    
    cin >> temp;
    while(temp != 0)
    {
        a[index] = temp;
        cin >> temp;
        index ++;
    }

    for (int i = index - 1; i >= 0; i --)
    {
        cout << a[i] << " ";
    }
}