/*
    Author    : MishkatIT
    Created   : Sunday 25-08-2024 03:39:31
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

    ll n;
    cin >> n;
    int mxTwo = log2(n);
    ll ans = n;
    while (mxTwo >= 0) {
        ans = min(ans, mxTwo + n / (1LL << mxTwo) + n % (1LL << mxTwo));
        mxTwo--;
    }
    cout << ans << '\n';
    return 0;
}