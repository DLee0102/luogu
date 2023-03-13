#include <iostream>

using namespace std;

int main()
{
    int starthour = 0;
    int startminute = 0;
    int starttime = 0;

    int finishhour = 0;
    int finishminute = 0;
    int finishtime = 0;

    int consumed = 0;
    int consumedhour = 0;
    int consumedminute = 0;

    cin >> starthour >> startminute >> finishhour >> finishminute;

    starttime = starthour * 60 + startminute;
    finishtime = finishhour * 60 + finishminute;

    consumed = finishtime - starttime;
    consumedhour = consumed / 60;
    consumedminute = consumed % 60;

    cout << consumedhour << " " << consumedminute;
}