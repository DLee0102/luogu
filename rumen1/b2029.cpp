#include <iostream>
#define PI 3.14

using namespace std;

int main()
{
    int h = 0;
    int r = 0;
    int total = 20000;
    int numbers = 0;
    cin >> h >> r;

    // if (total % (h * r * r * PI) != 0)
    //     numbers = total / (h * r * r * PI) + 1;
    
    numbers = total / (h * r * r * PI) + 1;
    cout << numbers;

    return 0;
}