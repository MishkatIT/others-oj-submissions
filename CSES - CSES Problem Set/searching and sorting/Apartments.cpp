/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-17.53.51
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto& i : a) cin >> i;
    for (auto& i : b) cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ita = 0, itb = 0;
    int ans = 0;
    while(ita < n && itb < m) {
        if(abs(a[ita] - b[itb]) <= k) {
            ans++;
            ita++, itb++;
        } else if(a[ita] < b[itb]) {
            ita++;
        } else {
            itb++;
        }
    }
    cout << ans;
    return 0;
}


