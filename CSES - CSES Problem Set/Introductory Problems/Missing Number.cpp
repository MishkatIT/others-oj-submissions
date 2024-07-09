/*
    author    : MishkatIT
    created   : Sunday 2024-01-28-01.35.33
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> v(n - 1);
    for (auto& i : v) {
        cin >> i;
    }
    ll ans = n * (n + 1) / 2;
    for (auto& i : v) {
        ans -= i;
    }
    cout << ans << '\n';
    return 0;
}


