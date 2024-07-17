/*
    Author    : MishkatIT
    Created   : Thursday 18-07-2024 01:51:14
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
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;


const int mod = 10000007;
const int mod = 1e9 + 7;

const int mod = 1e9 + 7;

void modNormalize(ll &x) { x %= mod; if (x < 0) x += mod; }

ll modMultiply(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x * y) % mod; }
ll modAdd(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x + y) % mod; }
ll modSubtract(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); x -= y; modNormalize(x); return x; }

ll modPower(ll base, ll exponent) { ll r = 1; while (exponent) { if (exponent & 1) r = modMultiply(r, base); base = modMultiply(base, base); exponent >>= 1; } return r; }
ll modInverse(ll x) { return modPower(x, mod - 2); }  // if mod is prime.
ll modDivide(ll x, ll y) { return modMultiply(x, modInverse(y)); }

ll modPower(ll base, ll exponent) { ll r = 1; while (exponent) { if (exponent & 1) r = modMultiply(r, base); base = modMultiply(base, base); exponent >>= 1; } return r; }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        ll n, k;
        cin >> n >> k;
        if (n == k && n == 0) break;
        ll sum = 0;
        n--;
        sum = modPower(n, k) + modPower(n, k);
        sum *= 2;
        n++;
        sum = modPower(n, k) + modPower(n, k);
        cout << sum << '\n';
    }
    return 0;
}