/*
    Author    : MishkatIT
    Created   : Friday 09-08-2024 19:54:12
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

    int tc;
    cin >> tc;
    while (tc--) {
        int l, r;
        cin >> l >> r;
        if (r >= 2 * l) {
            cout << -1 << '\n';
        } else {
            cout << r << '\n';
        }
    }
    return 0;
}