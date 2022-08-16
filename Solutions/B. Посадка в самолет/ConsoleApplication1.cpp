#include <iostream>
#include <cstring>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <map>

using namespace std;

int compup(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int compdown(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
bool pred(int i, int j)
{
    if (i > j) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int i, j;
    int k = 0, mas[2010], mas1[2010], m = 0, tmp = 0, l = 0, result = 0, min = 10000, power, res = 0, n;
    map<string, int> database;
    map<string, int>::iterator itr;
    long long sum = 0, nl, arr[100001], d;
    int64_t a, b, ll, x;
    bool o;
    string s1, s2, s3;
    char c1[110][110], c2[110];
    vector<long long> v1, v2;
    vector<int>::iterator i1;
    long double f = 0, ans, max = 0;

    c2[0] = 'A';
    c2[1] = 'B';
    c2[2] = 'C';
    c2[4] = 'D';
    c2[5] = 'E';
    c2[6] = 'F';
    cin >> n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 7; j++) {
            cin >> c1[i][j];
        }
    }
    cin >> k;
    for (i = 0; i < k; i++) {
        cin >> m >> s1 >> s2;
        tmp = 0;
        if (s1 == "left") {
            if (s2 == "aisle") {
                for (j = 0; j < n; j++) {
                    tmp++;
                    if (c1[j][2] == '.' && c1[j][2 - (m - 1)] == '.') {
                        if (m == 3 && c1[j][1] != '.') {
                            continue;
                        }
                        else if (m == 3 && c1[j][1] == '.') {
                            c1[j][1] = 'X';
                        }
                        c1[j][2] = 'X';
                        c1[j][2 - (m - 1)] = 'X';
                        cout << "Passengers can take seats:";
                        if (m == 3) {
                            l = 0;
                        }
                        if (m == 2) {
                            l = 1;
                        }
                        if (m == 1) {
                            l = 2;
                        }
                        for (int w = 0; w < m; w++) {
                            cout << " " << j + 1 << c2[l];
                            l++;
                        }
                        l = 0;
                        cout << endl;
                        for (int g = 0; g < n; g++) {
                            for (int v = 0; v < 7; v++) {
                                cout << c1[g][v];
                            }
                            cout << endl;
                        }
                        c1[j][2] = '#';
                        c1[j][2 - (m - 1)] = '#';
                        if (c1[j][1] == 'X') {
                            c1[j][1] = '#';
                        }
                        break;
                    }
                    if (tmp == n) {
                        cout << "Cannot fulfill passengers requirements" << endl;
                    }
                }
                tmp = 0;
            }
            if (s2 == "window") {
                for (j = 0; j < n; j++) {
                    tmp++;
                    if (c1[j][0] == '.' && c1[j][m - 1] == '.') {
                        if (m == 3 && c1[j][1] != '.') {
                            continue;
                        }
                        else if (m == 3 && c1[j][1] == '.') {
                            c1[j][1] = 'X';
                        }
                        c1[j][0] = 'X';
                        c1[j][m - 1] = 'X';
                        cout << "Passengers can take seats:";
                        for (int w = 0; w < m; w++) {
                            cout << " " << j + 1 << c2[w];
                        }
                        cout << endl;
                        for (int g = 0; g < n; g++) {
                            for (int v = 0; v < 7; v++) {
                                cout << c1[g][v];
                            }
                            cout << endl;
                        }
                        c1[j][0] = '#';
                        c1[j][m - 1] = '#';
                        if (c1[j][1] == 'X') {
                            c1[j][1] = '#';
                        }
                        break;
                    }
                    if (tmp == n) {
                        cout << "Cannot fulfill passengers requirements" << endl;
                    }
                }
                tmp = 0;
            }
        }
        if (s1 == "right") {
            if (s2 == "aisle") {
                for (j = 0; j < n; j++) {
                    tmp++;
                    if (c1[j][4] == '.' && c1[j][4 + (m - 1)] == '.') {
                        if (m == 3 && c1[j][5] != '.') {
                            continue;
                        }
                        else if (m == 3 && c1[j][5] == '.') {
                            c1[j][5] = 'X';
                        }
                        c1[j][4] = 'X';
                        c1[j][4 + (m - 1)] = 'X';
                        cout << "Passengers can take seats:";
                        l = 4;
                        for (int w = 0; w < m; w++) {
                            cout << " " << j + 1 << c2[l];
                            l++;
                        }
                        cout << endl;
                        for (int g = 0; g < n; g++) {
                            for (int v = 0; v < 7; v++) {
                                cout << c1[g][v];
                            }
                            cout << endl;
                        }
                        c1[j][4] = '#';
                        c1[j][4 + (m - 1)] = '#';
                        if (c1[j][5] == 'X') {
                            c1[j][5] = '#';
                        }
                        break;
                    }
                    if (tmp == n) {
                        cout << "Cannot fulfill passengers requirements" << endl;
                    }
                }
                tmp = 0;
            }
            if (s2 == "window") {
                for (j = 0; j < n; j++) {
                    tmp++;
                    if (c1[j][6] == '.' && c1[j][6 - (m - 1)] == '.') {
                        if (m == 3 && c1[j][5] != '.') {
                            continue;
                        }
                        else if (m == 3 && c1[j][5] == '.') {
                            c1[j][5] = 'X';
                        }
                        c1[j][6] = 'X';
                        c1[j][6 - (m - 1)] = 'X';
                        cout << "Passengers can take seats:";
                        if (m == 3) {
                            l = 4;
                        }
                        if (m == 2) {
                            l = 5;
                        }
                        if (m == 1) {
                            l = 6;
                        }
                        for (int w = 0; w < m; w++) {
                            cout << " " << j + 1 << c2[l];
                            l++;
                        }
                        cout << endl;
                        for (int g = 0; g < n; g++) {
                            for (int v = 0; v < 7; v++) {
                                cout << c1[g][v];
                            }
                            cout << endl;
                        }
                        c1[j][6] = '#';
                        c1[j][6 - (m - 1)] = '#';
                        if (c1[j][5] == 'X') {
                            c1[j][5] = '#';
                        }
                        break;
                    }
                    if (tmp == n) {
                        cout << "Cannot fulfill passengers requirements" << endl;
                    }
                }
                tmp = 0;
            }
        }
    }
}