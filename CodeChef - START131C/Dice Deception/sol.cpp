/*
    Author    : MishkatIT
    Created   : Wednesday 24-04-2024 20:35:44
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
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (i + 1 > k) {
                ans += v[i];
                continue;
            }
            if (v[i] == 1) {
                ans += 6;
            }
            else if (v[i] == 2) {
                ans += 5;
            }
            else if (v[i] == 3) {
                ans += 4;
            } else {
                ans += v[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}