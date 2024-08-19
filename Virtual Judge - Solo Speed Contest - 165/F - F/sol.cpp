/*
    Author    : MishkatIT
    Date      : 2024-08-19
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

int minOperationsToReverse(const string& str) {
    int n = str.size();
    int lps = 0; // Longest Palindromic Suffix length
    for (int i = n - 1, j = 0; i >= 0; --i, ++j) {
        if (str[i] != str[j]) break;
        ++lps;
    }
    return n - lps;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int ans = minOperationsToReverse(s);
        cout << ans << '\n';
    }
    return 0;
}
