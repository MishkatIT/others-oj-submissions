/*
    author    : MishkatIT
    created   : Monday 2024-02-26-03.37.07
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    map<ll, ll> mp;
    mp[0] = 1;
    ll pref = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        pref += v[i];
        pref %= n;
        pref = (pref + n) % n;
        if (mp.find(pref) != mp.end()) {
            ans += mp[pref];
        }
        mp[pref]++;
    }
    cout << ans;
    return 0;
}


