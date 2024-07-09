/*
    author    : MishkatIT
    created   : Monday 2024-02-26-19.32.17
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
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll low = *max_element(v.begin(), v.end());
    ll high = 1e16;
    ll ans = linf;
    while(low <= high) {
        ll mid = low + (high - low) / 2LL;
        int part = 1;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + v[i] <= mid) {
                sum += v[i];
            } else {
                sum = v[i];
                part++;
            }
            if (part > k) break;
        }
        if (part <= k) {
            ans = min(ans, mid);
            high = mid - 1;
        } else  {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}

