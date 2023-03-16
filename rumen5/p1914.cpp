#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string str;

    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << (char)(((str[i] + n) - 'a') % 26 + 'a');
    }
}