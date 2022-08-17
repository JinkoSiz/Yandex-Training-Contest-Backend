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
    int k = 0, mas[2010], mas1[2010], m = 0, tmp = 0, l = 0, result = 0, min = 100000, power, res = 0, n;
    map<string, int> database;
    map<string, int>::iterator itr;
    long long sum = 0, nl, arr[100001], d;
    int64_t a, b, ll, x;
    bool o;
    string s1, s2, s3;
    char c1[110][110], c2[110];
    vector<long long> v1, v2, v3;
    vector<long long>::iterator it, it1;
    long double f = 0, ans, max = 0;

    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> nl;
        v1.push_back(nl);           // 5 3
        v2.push_back(nl);           // 3 2 5 1 2
        v3.push_back(nl);
    }
    sort(v3.begin(), v3.end());     // 1 2 2 3 5
    sort(v2.begin(), v2.end());     
    for (i = 0; i < n; i++) {
        it = find(v3.begin(), v3.end(), v1[i]);
        l = it - v3.begin();
        l++;
        //cout << l << endl;
        if (l > k) {
            res = l - k;
            res--;
        }
        if (l + k > n) {
            m = n - 1;
        }
        else {
            m = l + k;
            m--;
        }
        l--;
        v3[l] = -1;
        //cout << v3[i] << " ";
        for (int w = 0; w < k; w++) {
            for (j = res; j <= m; j++) {
                if (abs(v1[i] - v3[j]) < min && v3[j] != -1) {
                    min = abs(v1[i] - v3[j]);
                    tmp = j;
                }
            }
            v3[tmp] = -1;
            sum += min;
            min = 100000;
            //cout << tmp << " ";
        }
        /*for (int w = 0; w < k; w++) {
            for (j = 0; j < n; j++) {
                if (abs(v1[i] - v1[j]) < min && j != i && v1[j] != -1) {
                    min = abs(v1[i] - v1[j]);
                    tmp = j;
                }
            }
            v1[tmp] = -1;
            sum += min;
            min = 100000;
        }*/
        while ((it = find(v3.begin(), v3.end(), -1)) != v3.end()) {
            it = find(v3.begin(), v3.end(), -1);
            l = it - v3.begin();
            v3[l] = v2[l];
        }
        /*while ((it = find(v1.begin(), v1.end(), -1)) != v1.end()) {
            it = find(v1.begin(), v1.end(), -1);
            l = it - v1.begin();
            v1[l] = v2[l];
        }*/
        /*for (j = 0; j < n; j++) {
            if (v1[j] == -1) {
                v1[j] = v2[j];
            }
        }*/
        cout << sum << " ";
        sum = 0;
        res = 0;
    }
    
}