/*
    Author    : MishkatIT
    Created   : Wednesday 01-05-2024 20:48:29
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
        
        int mx = 0;
        int pos = 0;
        int tmp = 0;
        for (int i = 0; i < n;) {
            if (v[i] & 1) {
                int j = i;
                while(j < n && (v[j] & 1)) j++;
                if (j - i >= mx) {
                    mx = j - i;
                    pos = i + (j - i) / 2;
                }
                i = j;
            } else i++;
        }
        v[pos] = 2;
        ll ans = 1LL * n * (n + 1) / 2;
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] & 1) {
                cnt++;
                ans -= cnt;
            } else {
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}