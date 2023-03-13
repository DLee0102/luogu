#include <iostream>

using namespace std;

int main()
{
    char key = 0;
    cin >> key;

    // 大小写转换
    cout << (char)(key - 32);
}