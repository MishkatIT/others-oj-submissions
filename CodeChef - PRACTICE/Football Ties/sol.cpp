/*
    Author    : MishkatIT
    Created   : Wednesday 22-05-2024 20:27:58
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
        int a, b;
        cin >> a >> b;
        cout << min(a, b) % 3 << '\n';
    }
    return 0;
}