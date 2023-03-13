#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int total = 0;
    int per = 19;
    int num = 0;

    cin >> a >> b;
    total = a * 10 + b;
    num = total / per;
    cout << num;

    return 0;
}