/*
    Author    : MishkatIT
    Created   : Friday 27-09-2024 01:56:06
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

    string str;
    cin >> str;
    vector<int> f(26);
    for (auto& i : str) {
        f[i - 'a']++;
    }

    for (int i = 0; i < 25; i++) {
        f[i + 1] += f[i] / 2;
        f[i] -= (f[i] / 2) * 2;
    }
    // debug(f);
    for (int i = 25; i >= 0; i--) {
        cout << string(f[i], (char)('a' + i));
    }
    return 0;
}