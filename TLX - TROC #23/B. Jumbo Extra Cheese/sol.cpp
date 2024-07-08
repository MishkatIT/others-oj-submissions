/*
    Author    : MishkatIT
    Created   : Monday 08-07-2024 15:59:49
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

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 19; i <= min(99, n); i += 10) {
        ans++;
    }
    cout << ans << '\n';
    return 0;
}