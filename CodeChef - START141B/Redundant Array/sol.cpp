/*
    Author    : MishkatIT
    Created   : Wednesday 03-07-2024 20:30:19
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = n;
        map<int, int> mp;
        for (auto& i : v) {
            mp[i]++;
        }
        for (auto& i : mp) {
            ans = min(ans, 1LL * i.first * (n - i.second));
        }
        cout << ans << '\n';
    }
    return 0;
}