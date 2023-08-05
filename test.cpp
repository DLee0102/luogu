#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    a.emplace_back(1);
    a.emplace_back(2);
    a.emplace_back(3);
    cout << *a.begin() << ": " << " ";
    cout << &*a.begin() << endl;
    auto it = std::find(a.begin(), a.end(), 1);
    a.erase(it);
    cout << *a.begin() << ": " << " ";
    cout << &*a.begin() << endl;
    cout << 1 << endl;
}