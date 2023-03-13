#include <iostream>
#include <cmath>
#define PI 3.141593

using namespace std;
void case14()
{
    int price = 110;
    int min = 0;
    int money = 0;
    int people = 10;
    for (int i = 0; i <= 110; i ++)
    {
        money = (price - i) * (10 + i);
        if (money == 3500)
            min = price - i;
    }
    cout << min;
}

int main()
{
    int T = 0;
    cin >> T;
    switch (T)
    {
    case 1:
        cout << "I love Luogu!";
        break;
    case 2:
        cout << "6" << " "<< "4";
        break;
    
    case 3:
        cout << "3" << endl << "12" << endl << "2" << endl;
        break;

    case 4:
        // cout.precision(6);
        // cout 默认精度就是六位，故可以不加此句
        cout << (500.0 / 3.0);
        break;
    case 5:
        cout << "15";
        break;

    case 6:
        cout << pow(117, 0.5);
        break;

    case 7:
        cout << "110" << endl;
        cout << "90" << endl;
        cout << "0" << endl;
        break;
    case 8:
        cout << (2 * PI * 5) << endl;
        cout << (PI * 5 * 5) << endl;

        // 此处必须写4.0，3.0，否则会报错
        cout << ((4.0 / 3.0) * PI * 5 * 5 * 5) << endl;
        break;
    case 9:
        cout << 22;
        break;
    case 10:
        cout << "9";
        break;
    case 11:
        cout << (100 / 3.0);
        break;
    case 12:
        cout << ('M' - 'A') + 1 << endl;
        cout << (char)('A' + 17) << endl;
        break;
    case 13:
        cout << (int)pow((4.0 / 3.0) * PI * (64 + 1000), 1.0 / 3.0);;
        break;
    case 14:
        case14();
        break;

    default:
        break;
    }
}