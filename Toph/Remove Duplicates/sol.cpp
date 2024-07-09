/*
    author    : MishkatIT
    created   : Friday 2024-02-16-15.31.47
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
    int t;
    cin >> t;
    int cs = 0;
    while (t--) {
        string str;
        cin >> str;
        map<char, int> mp;
        for (auto& i : str) mp[i]++;
        cout << "Case " << "#"<< ++cs << ":" << '\n';
        vector<bool> vis(150, false);
        for (auto& i : str) {
            if (i > 'Z' && !vis[i]) {
                cout << i << ' ' << mp[i]  << '\n';
                vis[i] = true;
            } else if (i < 'a' && !vis[i]) {
                cout << i << ' ' << mp[i]  << '\n';
                vis[i] = true;
            }
        }
    }
    return 0;
}


// case(upper / lower?) of the string is not clearly mentioned though.