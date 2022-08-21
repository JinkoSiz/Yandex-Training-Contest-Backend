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
struct cmp
{
    bool operator()(const long& a, const long& b) const
    {
        return a < b;
    }
};
int binarySearch(int arr[], int p, int r, int num) {
    if (p <= r) {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}

int main()
{
    int i, j;
    int64_t k = 0, mas[2010], mas1[2010], m = 0, tmp = 0, l = 0, result = 0, min = 100000, power, res = 0, n, r;
    map<long, long> database;
    map<long, long> database1;
    map<long, long>::iterator itr;
    long long sum = 0, nl, arr[100001], d;
    int64_t a, b, c, ll, x;
    bool o;
    string s1, s2, s3;
    char c1[110][110], c3[110][110], c2[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    vector<int64_t> v1, v2, v3;
    vector<long long>::iterator it, it1;
    long double f = 0, ans, max = 0;

    for (i = 0; i < 26; i++) {
        c2[i] = toupper(c2[i]);
    }
    cin >> n >> k;
    tmp = n - 1;
    l = k - 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cin >> c3[tmp][l];
            l--;
        }
        tmp--;
        l = k - 1;
    }
    for (i = 0; i < k; i++) {
        for (j = n - 1; j >= 0; j--) {
            if (c3[j][i] == '\\') {
                c3[j + 1][i] = '\\';
                c3[j][i] = '/';
                c3[j - 1][i] = '.';
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            if (c3[i][j] == '/' && c3[i - 1][j] == '.' && c3[i][j + 1] == '.' && i != 0) {
                c3[i][j] = '.';
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            if (c3[i][j] == '.' && c3[i - 1][j] == '\\' && c3[i][j - 1] == '_') {
                c3[i][j] = '/';
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cout << c3[i][j];
        }
        cout << endl;
    }
}