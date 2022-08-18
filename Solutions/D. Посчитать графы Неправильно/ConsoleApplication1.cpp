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
#include <cstdint>

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
intmax_t fact(intmax_t N)
{   
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
intmax_t factorial(intmax_t N) {
    intmax_t x = 1;
    for (intmax_t i = N; i >= 1; i--) {
        x *= i;
    }
    return x;
}

int main()
{
    intmax_t i, j;
    int k = 0, mas[2010], mas1[2010], m = 0, tmp = 0, result = 0, min = 100000, power, res = 0, n, r, mid, l = 0;
    map<string, int> database;
    map<string, int>::iterator itr;
    long long sum = 0, nl, arr[100001], d;
    intmax_t a, b = 0, ll, x, f1, f2, f3, f4, f5, f6, f, f7, f8, f9;
    bool o;
    string s1, s2, s3;
    char c1[110][110], c2[110];
    vector<long long> v1, v2, v3;
    vector<long long>::iterator it, it1;
    long long ans = 0, max = 0;

    cin >> x;
    ll = x - 1;
    for (i = 0; i <= ll; i++) {
        f = ll - i;
        f1 = pow(-1, i);
        f2 = fact(ll - i);
        f8 = fact(i);
        f7 = (f8 * f2);
        f3 = (fact(ll) / f7);
        if (f < 2) {
            f5 = 0;
        }
        else {
            f9 = (fact(2) * fact(f - 2));
            f5 = (fact(f) / f9);
        }
        f4 = pow(2, f5);
        b += f1 * f3 * f4;
    }
    a = x * b;
    f6 = (pow(10, 9) + 7);
    cout << a % f6;
}