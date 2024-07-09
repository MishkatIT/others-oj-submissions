/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-18.28.02
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int last = -1;
    for (int i = 0; i < n; i++) {
        if (last == -1) {
            last = v[i].second;
        } else {
            if (v[i].first >= last) {
                ans++;
                last = v[i].second;
            } else {
                if (v[i].second <= last) {
                    last = v[i].second;
                }
            }
        }
    }

    cout << ans;

    return 0;
}
