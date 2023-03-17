#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    int result;
    char memory = 0;
    cin >> n;
    // get读取留在缓存区的回车符
    cin.get();
    string str[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int spacecount = 0;
        for (int j = 0; j < str[i].size(); j ++)
        {
            if (str[i][j] == ' ') spacecount ++;
        }

        if (spacecount == 2)
        {
            memory = str[i][0];
            string op1;
            string op2;
            int opnumber1 = 0;
            int opnumber2 = 0;
            for (int j = 2; j < str[i].size(); j ++)
            {
                if (str[i][j] == ' ')
                {
                    for (int m = 2; m < j; m ++)
                    {
                        op1 += str[i][m];
                    }
                    for (int m = j + 1; m < str[i].size(); m ++)
                    {
                        op2 += str[i][m];
                    }
                }
            }

            for (int j = 0; j < op1.size(); j ++)
            {
                opnumber1 += (int)(op1[j] - '0') * pow(10, op1.size() - 1 - j);
            }

            for (int j = 0; j < op1.size(); j ++)
            {
                opnumber2 += (int)(op2[j] - '0') * pow(10, op2.size() - 1 - j);
            }

            switch (str[i][0])
            {
            case 'a':
                result = opnumber1 + opnumber2;
                cout << op1 << "+" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            case 'b':
                result = opnumber1 - opnumber2;
                cout << op1 << "-" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            case 'c':
                result = opnumber1 * opnumber2;
                cout << op1 << "*" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            default:
                break;
            }
        }

        if (spacecount == 1)
        {
            string op1;
            string op2;
            int opnumber1 = 0;
            int opnumber2 = 0;
            for (int j = 0; j < str[i].size(); j ++)
            {
                if (str[i][j] == ' ')
                {
                    for (int m = 0; m < j; m ++)
                    {
                        op1 += str[i][m];
                    }
                    for (int m = j + 1; m < str[i].size(); m ++)
                    {
                        op2 += str[i][m];
                    }
                }
            }

            for (int j = 0; j < op1.size(); j ++)
            {
                opnumber1 += (int)(op1[j] - '0') * pow(10, op1.size() - 1 - j);
            }

            for (int j = 0; j < op1.size(); j ++)
            {
                opnumber2 += (int)(op2[j] - '0') * pow(10, op2.size() - 1 - j);
            }

            switch (memory)
            {
            case 'a':
                result = opnumber1 + opnumber2;
                cout << op1 << "+" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            case 'b':
                result = opnumber1 - opnumber2;
                cout << op1 << "-" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            case 'c':
                result = opnumber1 * opnumber2;
                cout << op1 << "*" << op2 << "=" << result << endl;
                cout << result << endl;
                break;
            default:
                break;
            }
        }

    }

}