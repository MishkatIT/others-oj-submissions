/*
    Author    : MishkatIT
    Created   : Wednesday 22-05-2024 20:32:29
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
        int a = 0, b = 0;
        bool one = false, zero = false;
        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                if (!one) {
                    a++;
                    one = true;
                    zero = false;
                }
            } else {
                if (!zero) {
                    b++;
                    one = false;
                    zero = true;
                }
            }
        }
        cout << min(a, b) << '\n';
    }
    return 0;
}