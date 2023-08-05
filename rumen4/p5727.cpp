#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int input_ = 0;
    vector<int> list_;
    cin >> input_;

    list_.push_back(input_);
    while (input_ != 1) {
        if (input_ % 2 == 0) {
            input_ = input_ / 2;
        } else {
            input_ = input_ * 3 + 1;
        }
        list_.push_back(input_);
    }

    for (int i = list_.size() - 1; i >= 0; i -- ) {
        if (i != 0) {
            cout << list_[i] << " ";
        } else {
            cout << list_[i];
        }
        
    }
}