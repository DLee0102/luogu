#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

struct Scores
{
    int Chinese = 0;
    int Maths = 0;
    int English = 0;

    int getSum()
    {
        return Chinese + Maths + English;
    }
};

int main()
{
    int N = 0;
    int couples = 0;
    cin >> N;
    vector<Scores> students(N);
    int chinese = 0;
    int maths = 0;
    int english = 0;
    for (int i = 0; i < N; i ++)
    {
        cin >> chinese >> maths >> english;
        students[i].Chinese = chinese;
        students[i].Maths = maths;
        students[i].English = english;
    }

    for (auto it = students.begin(); it != students.end(); it ++)
    {
        for (auto it_in = it + 1; it_in != students.end(); it_in ++)
        {
            if (abs(it_in->getSum() - it->getSum()) <= 10)
            {
                if (abs(it_in->Maths - it->Maths) <= 5 && abs(it_in->Chinese - it->Chinese) <= 5
                    && abs(it_in->English - it->English) <= 5)
                {
                    couples ++;
                }
            }
        }
    }

    cout << couples;

}