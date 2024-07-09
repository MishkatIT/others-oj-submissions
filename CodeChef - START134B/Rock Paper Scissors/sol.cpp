/*
    Author    : MishkatIT
    Created   : Wednesday 15-05-2024 20:30:16
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
        string str;
        cin >> str;
        int cons = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = i;
            bool ok = false;
            while (j + 1 < n && str[j] == str[j + 1]) {
                ok = true;
                j++;
            }
            if (j == n)
                j--;
            if (ok) {
                cons += (j - i + 1);
                ans += (j - i + 1 + 1) / 2;
            }
            i = j;
        }
        cout << ans + (n - cons) << '\n';
    }
    return 0;
}