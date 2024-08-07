/*
    Author    : MishkatIT
    Created   : Wednesday 24-04-2024 20:42:51
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
            i %= k;
        }
        // debug(v);
        sort(v.begin(), v.end());
        int ans =  v.back() - v.front();
        for (int i = 1; i < n; i++) {
            ans = min(ans, v[i - 1] + k - v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
