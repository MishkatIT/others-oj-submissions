/*
    Author    : MishkatIT
    Created   : Wednesday 01-05-2024 20:26:48
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
        int n , m;
        cin >> n >> m;
        vector<int> a(n);
        for (auto& i : a) {
            cin >> i;
        }
        vector<int> b(m);
        for (auto& i : b) {
            cin >> i;
        }
        if (n < 4 || m < 4 || (n + m < 11)) {
            cout << -1 << '\n';
            continue;
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        // debug(a);debug(b);
        ll ans = 0;
        for (int i = 0; i < 4; i++) {
            ans += a[i];
            ans += b[i];
        }

        vector<int> temp;
        for (int i = 4; i < n; i++) {
            temp.push_back(a[i]);
        }
        for (int i = 4; i < m; i++) {
            temp.push_back(b[i]);
        }
        sort(temp.rbegin(), temp.rend());

        for (int i = 0; i < 3; i++) {
            ans += temp[i];
        }
        cout << ans << '\n';
    }
    return 0;
}