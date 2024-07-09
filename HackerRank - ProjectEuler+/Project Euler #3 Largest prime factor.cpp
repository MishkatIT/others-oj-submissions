/*
    Author    : MishkatIT
    Created   : Thursday 06-06-2024 20:28:33
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
const ll N = 1e6 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

vector<int> prime(N, true);

void sieve() {
    for (int i = 2; i < N; i++) {
        if (prime[i]) {
            for (int j = i * 2; j < N; j += i) {
                prime[j] = false;
            }
        }
    }
}

ll largestPrimeFact(ll n) {
    ll mx = -1;
    for (ll i = 2; i * i <= n; i++) {
        if (prime[i]) {
            if (n % i == 0) {
                mx = i;
                while (n % i == 0) {
                    n /= i;
                }
            }
        }
    }
    if (n > 1) mx = n;
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin >> n;
        cout << largestPrimeFact(n) << '\n';
    }
    return 0;
}