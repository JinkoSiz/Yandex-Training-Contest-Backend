﻿#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool flag = true;
    int32_t N, it = 1, st = 0, zero = 0, eden = 0, col = 0, i = 0;

    cin >> N;

    string str = "";

    for (int32_t i = 0; i < N; i++) {
        flag = true;
        if (i == 0)cin >> str;
        while (flag) {
            for (i = st; i < it; i++) {

                if (it == 1) {
                    cout << -1 << " ";
                    it++;
                    i = it;
                }
                else if (it > N) {
                    flag = false;
                }
                else {
                    if (str[i] - '0' == 0) zero++;
                    if (str[i] - '0' == 1) eden++;
                    if (str[it - 1] - '0' == 1 && i == it - 1) {
                        if (zero == eden) {
                            if (st == it - 1 || it - st == 2) {
                                cout << -1 << " ";
                                zero = 0;
                                eden = 0;
                                it++;
                                st = 0;
                            }
                            else if (st < it - 1) {
                                st++;
                            }
                            i = it;
                        }
                        else if (zero > eden) {
                            if (st == 0) cout << -1 << " ";
                            else {
                                cout << st + 1 << " ";
                                st = 0;
                            }
                            zero = 0;
                            eden = 0;
                            it++;
                            i = it;
                        }
                        else {
                            if (st == 0) cout << 2 << " ";
                            else {
                                cout << st + 1 << " ";
                                st = 0;
                            }
                            zero = 0;
                            eden = 0;
                            it++;
                            i = it;
                        }
                    }
                    else if (str[it - 1] - '0' == 0 && i == it - 1) {
                        if (zero == eden) {
                            if (st == it - 1 || it - st == 2) {
                                cout << -1 << " ";
                                zero = 0;
                                eden = 0;
                                it++;
                                st = 0;
                            }
                            else if (st < it - 1) {
                                st++;
                            }
                            i = it;
                        }
                        else {
                            cout << st + 1 << " ";
                            st = 0;
                            zero = 0;
                            eden = 0;
                            it++;
                            i = it;
                        }
                    }
                }
            }
        }
    }
}
