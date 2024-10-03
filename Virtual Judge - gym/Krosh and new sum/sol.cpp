/*
    Author    : MishkatIT
    Created   : Tuesday 24-09-2024 13:29:59
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


void modNormalize(ll &x) { x %= mod; if (x < 0) x += mod; }

ll modMultiply(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x * y) % mod; }
ll modAdd(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x + y) % mod; }
ll modSubtract(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); x -= y; modNormalize(x); return x; }

ll modPower(ll base, ll exponent) { ll r = 1; while (exponent) { if (exponent & 1) r = modMultiply(r, base); base = modMultiply(base, base); exponent >>= 1; } return r; }
ll modInverse(ll x) { return modPower(x, mod - 2); }  // if mod is prime.
ll modDivide(ll x, ll y) { return modMultiply(x, modInverse(y)); }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    ll suf = 0;
    for (int i = n - 1; i > 0; i--) {
        suf += v[i];
    }
    ll pref = 0;
    ll ans = 0;
    
    for (ll i = 0; i < n; i++) {
        ans = modAdd(ans, modMultiply(v[i], suf - modMultiply(v[i], n - i - 1)));
        if (i + 1 < n) suf -= v[i+ 1];
        ans = modAdd(ans, modMultiply(v[i], modMultiply(v[i], i) - pref));
        pref += v[i];
    }
    cout << ans << '\n';
    return 0;
}