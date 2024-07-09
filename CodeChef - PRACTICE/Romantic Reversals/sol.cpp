/*
    author    : MishkatIT
    created   : Wednesday 2024-02-14-21.19.11
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
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int c = a[i] - 'A'; ; c += 3) {
                c %= 26;
                if (char(c + 'A') == b[i])break;
                cnt++;
            }
            ans[i] = cnt;
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}
