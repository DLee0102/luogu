#include <iostream>

using namespace std;

int main()
{
    int students = 0;
    double t = 0;
    int bottles = 0;
    double pers = 0;

    cin >> t;
    cin >> students;

    pers = t / students;
    cout.setf(ios_base::fixed);
    cout.precision(3);
    cout << pers << endl;
    // cout.unsetf(ios_base::fixed);
    // cout << pers << endl;

    bottles = 2 * students;
    cout << bottles;


}