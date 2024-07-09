/*
    author    : MishkatIT
    created   : Monday 2024-02-26-03.00.25
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll sum = 0, ans = 0;
    map<ll, ll> have;
    have[0] = 1;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        ll rem = sum - x;
        if (have.find(rem) != have.end()) {
            ans += have[rem];
        }
        have[sum]++;
    }
    cout << ans;
    return 0;
}


