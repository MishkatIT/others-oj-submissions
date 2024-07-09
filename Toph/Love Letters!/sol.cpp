/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-15.21.30
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

vector<bool> prime(N, true);
void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < N; i++) {
        if(prime[i]) {
            for (int j = i * i; j < N; j += i) {
                prime[j] = false;
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
    for (int cs = 1; cs <= t; cs++) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> freq(26, 0);
        for (auto& i: str) {
            freq[i - 'A']++;
        }
//      debug(freq['C' - 'A']);
        cout << "Case " << cs << ":" << '\n';
        bool found = false;
        for (int i = 0; i < 26; i++) {
            if(prime[freq[i]]) {
                cout << char('A' + i) << " = " << freq[i] << '\n';
                found = true;
            }
        }
        if(!found) {
            cout << "Love is painful !" << '\n';
        }
    }
    return 0;
}