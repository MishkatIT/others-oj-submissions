/*
    Author    : MishkatIT
    Created   : Wednesday 29-05-2024 21:01:05
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
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll ans = n * (n + 1) / 2;
        ll one = 0, zero = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i = 0; i < n; ++i) {
            if (str[i] == '1') {
                one++;
            } else {
                zero++;
            }

            int diff = one - zero;

            if (mp.find(diff) != mp.end()) {
                ans += mp[diff];
            }

            mp[diff]++;
        }
        cout << ans << '\n';
    }
    return 0;
}