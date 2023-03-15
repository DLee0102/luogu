#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i ++)
    {
        if ((int)str[i] >= 97 && (int)str[i] <= 122)
            str[i] = (char)(str[i] - 32);
    }
    cout << str;
}