/*
    Author    : MishkatIT
    Created   : Monday 23-09-2024 19:42:34
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int tc;
    cin >> tc;
    for (int cs = 1; cs <= tc; cs++) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }

        sort(v.begin(), v.end());
        ll sum = v.front();
        if (n > 2) {
            n -= 2;
            sum += v.front() * 2 * n;
        }
        cout << "Case #" << cs << ": ";
        cout << (sum <= k ? "YES" : "NO") << '\n';
    }
    return 0;
}