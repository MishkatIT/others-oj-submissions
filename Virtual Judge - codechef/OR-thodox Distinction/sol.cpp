/*
    Author    : MishkatIT
    Created   : Saturday 17-08-2024 01:14:49
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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        bool ok = (n <= 60);
        if (ok) {
            set<ll> s;
            for (int i = 0; i < n; i++) {
                ll cur = 0;
                for (int j = i; j < n; j++) {
                    cur |= v[j];
                    s.insert(cur);
                }
            }
            if ((int)s.size() != n * (n + 1) / 2) ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}