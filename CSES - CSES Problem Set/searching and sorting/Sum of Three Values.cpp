/*
    author    : MishkatIT
    created   : Monday 2024-02-26-02.07.28
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
    vector<pair<int, int>> v(n); // value, position
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        int l = i + 1, r = n - 1;
        int rem = x - v[i].first; // remaining.
        while(l < r) {
            ll sum = v[l].first + v[r].first;
            if (sum > rem) {
                r--;
            } else if (sum < rem) {
                l++;
            } else {
                cout << v[i].second + 1 << ' ' << v[l].second + 1 << ' ' << v[r].second + 1;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}

