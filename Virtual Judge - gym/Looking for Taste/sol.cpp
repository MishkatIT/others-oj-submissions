/*
    Author    : MishkatIT
    Created   : Friday 27-09-2024 16:42:42
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

    freopen("looking.in", "r", stdin);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans |= x;
        }
        cout << ans << '\n';
    }
    return 0;
}