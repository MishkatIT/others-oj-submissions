/*
    author    : MishkatIT
    created   : Saturday 2023-07-29-14.53.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        stack<int> s;
        vector<int> v(n);
        for (auto& i : v) cin >> i;
        int zz = 1;
        for (int i = 0; i < n; i++) {
            if(v[i] == zz) zz++;
            else if(!s.empty() && s.top() == zz){
                s.pop();
                zz++;
                i--;
            }
            else s.push(v[i]);
        }
        bool ok = true;
        while(!s.empty()) {
            if(s.top() != zz) {
                ok = false;
                break;
            }
            s.pop();
            zz++;
        }
        cout << (ok ? "yes" : "no") << '\n';
    }
    return 0;
}

