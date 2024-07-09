/*
    Author    : MishkatIT
    Created   : Thursday 23-05-2024 19:11:15
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
        int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        while (b > a) {
            if (b % k == 0 && b / k >= a) {
                b /= k;
                ans++;
            } else {
                if (b % k == 0 || (b - b % k < a)) {
                    ans += (b - a);
                    break;
                }
                ans += (b % k);
                b -= (b % k);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}