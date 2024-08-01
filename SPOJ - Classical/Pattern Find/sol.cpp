/*
    Author    : MishkatIT
    Created   : Thursday 01-08-2024 20:03:09
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

void computeLPS(string &ptr, vector<int> &lps) {
    int len = 0, i = 1;
    int m = ptr.length();
    while (i < m) {
        if (ptr[len] == ptr[i]) {
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

vector<int> KMP(string &str, string &ptr) {
    int n = str.length(), m = ptr.length();
    vector<int> lps(m);
    computeLPS(ptr, lps);
    int i = 0, j = 0;
    vector<int> pos;
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
            pos.push_back(i - j);
            j = lps[j - 1];
        }
    }
    return pos;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        string str, ptr;
        cin >> str >> ptr;
        vector<int> ans = KMP(str, ptr);
        int sz = ans.size();
        if (sz == 0) {
            cout << "Not Found" << '\n';
        } else {
            cout << sz << '\n';
            for (int i = 0; i < sz; i++) {
                cout << ans[i] + 1 << " \n"[i == sz - 1];
            }
        }
        if (tc)
            cout << '\n';
    }
    return 0;
}