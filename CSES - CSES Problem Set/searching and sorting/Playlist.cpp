/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-00.04.59
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
    int ans = 0;
    map<int, bool> seen;
    int r = 0, l = 0;
    while(r < n) {
        if (seen[v[r]]) {
            bool found = false;
            while(!found) {
                seen[v[l]] = false;
                found |= (v[l] == v[r]);
                l++;
            }
        } else {
            seen[v[r]] = true;
            r++;
        }
        ans = max(ans, r - l);
    }
    cout << ans;
    return 0;
}


