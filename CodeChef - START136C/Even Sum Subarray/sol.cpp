/*
    Author    : MishkatIT
    Created   : Wednesday 29-05-2024 20:28:05
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
        for (auto &i : v) {
            cin >> i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int cnt = 0;
            for (int j = i; j < n; j++) {
                sum += v[j ];
                cnt++;
                if (sum % 2 == 0) {
                    ans = max(ans, cnt);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}