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
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    ll ans = n;
    int l = 0, r = 0;
    map<int, int> mp;
    while(r < n) {
        if (mp.find(v[r]) != mp.end() || mp.size() < k) {
            mp[v[r]]++;
            ans += (r - l);
            r++;
        } else {
            mp[v[l]]--;
            if (mp[v[l]] == 0) {
                mp.erase(v[l]);
            }
            l++;
        }
    }
    cout << ans;
    return 0;
}

