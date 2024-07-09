/*
    Author    : MishkatIT
    Created   : Wednesday 29-05-2024 20:34:46
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
        string str;
        cin >> str;
        int x = 1, y = 1;
        if (str[0] == '1') {
            x += 10;
        }
        if (str[1] == '1') {
            x += 10;
        }
        if (str[2] == '1') {
            y += 10;
        }
        if (str[3] == '1') {
            y += 10;
        }
        cout << x * y << '\n';

    }
    return 0;
}