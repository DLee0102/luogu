#include <iostream>

using namespace std;

int main()
{
    char a[5];
    cin >> a;

    for (int i = 4; i >= 0; i --)
    {
        cout << a[i];
    }
}