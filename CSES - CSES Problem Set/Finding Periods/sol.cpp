/*
    Author    : MishkatIT
    Created   : Friday 27-09-2024 14:40:17
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
    int cnt = 0;
    for (int i = 0; ; i++) {
        if ((1 << i) < (int)1e6) {
            cnt++;
        } else break;
    }
    cout << cnt << '\n';

    return 0;
}