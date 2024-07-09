/*
    Author    : MishkatIT
    Created   : Wednesday 05-06-2024 20:59:58
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

        auto mx = [&](auto& v) {
            int n = v.size();
            ll sum = 0;
            for (int i = 0; i + 1 < n; i++) {
                sum += abs(v[i] - v[i + 1]);
            }
            return sum;
        };

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int temp = v[i];
            v[i] = 1;
            ans = max(ans, mx(v));
            v[i] = k;
            ans = max(ans, mx(v));
            v[i] = temp;
        }
        cout << ans << '\n';
    }
    return 0;
}