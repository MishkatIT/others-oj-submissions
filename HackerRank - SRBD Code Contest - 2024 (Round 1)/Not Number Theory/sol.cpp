/*
    Author    : MishkatIT
    Created   : Thursday 26-09-2024 16:04:09
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

    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        int n = str.size();
        int lim = 1;
        for (int i = 0; i < n; i++) {
            lim *= 10;
        }

        auto ok = [&](int cur) {
            string temp = to_string(cur);
            bool f = true;
            for (int i = str.size() - 1; i >= 0; i--) {
                f &= (temp[i] == str[i] || str[i] == '?');
            }
            if (f) {
                return __builtin_popcount(cur);
            } 
            return -1;
        };

        int mxone = 0;
        int mx = 0;
        for (int i = 1; i < lim; i++) {
            int one = ok(i);
            if (one != -1) {
                if (one >= mxone) {
                    mxone = one;
                    mx = i;
                }
            }
        }
        cout << mx << '\n';
    }
    return 0;
}