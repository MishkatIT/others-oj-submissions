/*
    Author    : MishkatIT
    Created   : Thursday 26-09-2024 01:17:16
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int n = str.size();
    vector<int> lps(n);
    int len = 0, i = 1;
    while (i < n) {
        if (str[i] == str[len]) {
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
    int idx = n - 1;
    vector<int> ans;
    while (lps[idx] != 0) {
        ans.push_back(lps[idx]);
        idx = lps[idx] - 1;
    }
    debug(lps);
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << ' ';
    }
    return 0;
}