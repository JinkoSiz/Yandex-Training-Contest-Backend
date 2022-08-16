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
    char c1[110], c2[110];
    vector<long long> v1, v2;
    vector<int>::iterator i1;
    long double f = 0, ans, max = 0;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> k;
        v1.push_back(k);
        if (k < tmp && i != 0) {
            cout << -1;
            return 0;
        }
        tmp = k;
    }
    cout << v1[n - 1] - v1[0];
}