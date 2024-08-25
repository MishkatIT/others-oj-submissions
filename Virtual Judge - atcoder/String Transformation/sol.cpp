/*
    Author    : MishkatIT
    Created   : Saturday 24-08-2024 18:24:28
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

    string s, t;
    cin >> s >> t;
    vector<int> fs(26), ft(26);
    for (auto& i : s) fs[i - 'a']++;
    for (auto& i : t) ft[i - 'a']++;
    sort(fs.begin(), fs.end());
    sort(ft.begin(), ft.end());
    cout << (fs == ft ? "Yes" : "No") << '\n';
    return 0;
}