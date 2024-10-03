/*
    Author    : MishkatIT
    Created   : Thursday 26-09-2024 00:52:20
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;


void computeLPS(int m, string& ptr, vector<int>& lps) {
    int len = 0, i = 1;
    while (i < m) {
        if (ptr[i] == ptr[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                i++;
            }
        }
    }
}

int KMP(string& str, string& ptr) {
    int n = str.length(), m = ptr.length();
    vector<int> lps(m);
    computeLPS(m, ptr, lps);
    int i = 0, j = 0;
    int ans = 0;
    while (i < n) {
        if (str[i] == ptr[j]) {
            i++, j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
        if (j == m) {
            ans++;
            j = lps[j - 1];
        }
    }
    return ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;
    cout << KMP(a, b) << '\n';
    return 0;
}