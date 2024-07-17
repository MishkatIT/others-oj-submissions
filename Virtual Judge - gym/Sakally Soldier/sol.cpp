/*
    Author    : MishkatIT
    Created   : Wednesday 17-07-2024 01:37:34
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
    freopen("alimagde.in", "r", stdin);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int x = 0;
        int cnt = 0;
        for (int i = 1; x + i <= n; i++) {
            cnt++;
            x += i;
        }
        cout << n - cnt << '\n';
    }
    return 0;
}