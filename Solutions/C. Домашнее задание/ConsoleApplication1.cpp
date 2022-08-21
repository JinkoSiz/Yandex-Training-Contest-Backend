﻿#include <iostream>
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
#include <numeric>

using namespace std;

vector<long long> Factor(long long n) {
    vector<long long> ans;
    long d = 2;
    while (d * d <= n) {
        if (n % d == 0) {
            ans.push_back(d);
            n /= d;
        }
        else {
            d++;
        }
    }
    if (n > 1) {
        ans.push_back(n);
    }
    return ans;
}
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int i, j;
    int64_t n, a, b;

    cin >> n;
    while (n > 0) {
        n--;
        cin >> a >> b;
        vector<long long> d_a = Factor(a);
        vector<long long> d_b = Factor(b);
        vector<long long> cd;
        cd.reserve(d_a.size() + d_b.size());
        cd.insert(cd.end(), d_a.begin(), d_a.end());
        cd.insert(cd.end(), d_b.begin(), d_b.end());
        sort(cd.begin(), cd.end());
        for (i = cd.size() - 1; i >= 0; i--) {
            if (count(d_a.begin(), d_a.end(), cd[i]) > count(d_b.begin(), d_b.end(), cd[i])) {
                b *= cd[i];
                break;
            }
            else {
                a *= cd[i];
                break;
            }
        }
        cout << gcd(a, b) << endl;
        d_a.clear();
        d_b.clear();
        cd.clear();
    }
}