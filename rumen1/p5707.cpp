#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int v = 0;
    int routetime = 0;
    int routehours = 0;
    int routeminutes = 0;
    int hours = 8;
    int minutes = 0;

    cin >> s >> v;
    if (s % v != 0)
    {
        routetime = s / v + 1 + 10;
    }
    else
    {
        routetime = s / v + 10;
    }

    routehours = routetime / 60;
    routeminutes = routetime % 60;

    minutes = 60 - routeminutes;
    // 加不加此句对通过无影响，但必须加此句
    if (minutes == 60) minutes = 0;
    if (routeminutes > 0)
        hours = hours - 1 - routehours;
    else
        hours = hours - routehours;
    if (hours < 0)
        hours = 24 + hours;
    cout.fill('0');
    cout.width(2);
    cout << hours << ":";
    cout.width(2);
    cout << minutes;

    return 0;
}