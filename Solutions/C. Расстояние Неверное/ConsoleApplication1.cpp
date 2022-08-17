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
bool cmp(pair<long, long>& a, pair<long, long>& b)
{
    return a.second < b.second;
}
void sortmap(map<long, long>& M)
{
    vector<pair<long, long>> A;
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {
        cout << it.first << ' '
            << it.second << endl;
    }
}

int main()
{
    int i, j;
    int k = 0, mas[2010], mas1[2010], m = 0, tmp = 0, l = 0, result = 0, min = 100000, power, res = 0, n;
    map<long, long> database;
    map<string, int>::iterator itr;
    long long sum = 0, nl, arr[100001], d;
    int64_t a, b, ll, x;
    bool o;
    string s1, s2, s3;
    char c1[110][110], c2[110];
    vector<long long> v1, v2, v3;
    vector<long long>::iterator it, it1;
    long double f = 0, ans, max = 0;
    multimap<long, long> MM, MM1;
    //multimap<long, long>::iterator itr;

    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> m;
        MM.insert(make_pair(i, m)); 
        MM1.insert(make_pair(i, m)); 
    }
    /*for (auto& it : MM) {
        cout << it.first << ' '
            << it.second << endl;
    }*/
    for (auto& it : MM) {
        for (int w = 0; w < k; w++) {
            for (auto& itr : MM) {
                if ((it.first != itr.first) && (abs(it.second - itr.second) < min) && (itr.second != -1)) {
                    min = abs(it.second - itr.second);
                    tmp = itr.first;
                }
                cout << min << endl;
            }
            MM.erase(tmp);
            MM.insert({ -1, tmp });
            sum += min;
            min = 100000;
        }
        multimap<long, long> MM(MM1.begin(), MM1.end());
        //cout << min << " ";
        sum = 0;
    }
}