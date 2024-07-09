/*
    author    : MishkatIT
    created   : Friday 2023-10-06-17.48.00
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

vector<pair<ll, ll>> fact;
void primeFact(ll n)
{
    for (ll i = 2; i * i <= n; i++) {
        ll cnt = 0;
        while(n % i == 0) {
            cnt++;
            n /= i;
        }
        if(cnt) {
            fact.push_back({i, cnt});
        }
    }
    if(n > 1) {
        fact.push_back({n, 1LL});
    }
}


int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        fact.clear();
        ll n;
        cin >> n;
        if(n == 1) {
            cout << 4 << '\n';
            continue;
        }
        primeFact(n);
        ll ans = linf;
        for (ll i = 2; i <= 60; i++) { //checking if it is the minimum possible x ^ i for all prime factor.
            ll temp = 1;
            for (auto& x : fact) {
                if (x.second % i != 0) {
                    ll required = i - x.second % i;
                    while(required--) {
                        temp *= x.first;
                        if(temp > 1e12) {
                            break;
                        }
                    }
                }
                if(temp >= 1e12) break;
            }
            if(temp <= 1e12 && temp >= 1) {
                ans = min(ans, temp);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}