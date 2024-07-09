/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-14.42.57
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const int N     = 1e6 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> prime(N, -1);

void sieve()
{
    iota(prime.begin() + 2, prime.end(), 2);
    for (int i = 2; i * i < N; i++) {
        if(prime[i] == i) {
            for (int j = i * i; j < N; j += i) {
                  prime[j] = i;
            }
        }
    }
}

int main()
{
    fio;
    sieve();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll sq = sqrtl(n);
        if(sq * sq != n || prime[sq] != sq) {
            cout << "NO." << '\n';
        } else {
            cout << "YES." << '\n';
        }
    }
    return 0;
}
