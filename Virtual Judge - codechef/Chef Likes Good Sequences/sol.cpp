/*
    Author    : MishkatIT
    Created   : Tuesday 13-08-2024 18:39:09
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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = 1;
        for (int i = 1; i < n; i++) {
            ans += (v[i] != v[i - 1]);
        }
        while (q--) {
            int pos, val;
            cin >> pos >> val;
            --pos;
            if (pos + 1 < n) {
                ans -= (v[pos] != v[pos + 1]);
            }
            if (pos - 1 >= 0) {
                ans -= (v[pos] != v[pos - 1]);
            }
            v[pos] = val;
            if (pos + 1 < n) {
                ans += (v[pos] != v[pos + 1]);
            }
            if (pos - 1 >= 0) {
                ans += (v[pos] != v[pos - 1]);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}