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
    int ans = 0;
    int l = 0, r = 0;
    ll sum = 0;
    while(r < n) {
        if (sum + v[r] <= x) {
            sum += v[r++];
        } else {
            sum -= v[l++];
        }
        ans += (sum == x);
    }
    cout << ans << '\n';
    return 0;
}

