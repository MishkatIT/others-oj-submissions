#include <bits/stdc++.h>
using namespace std;

int modpow(long long base, long long power, long long mod) {
    long long res = 1;
    while(power) {
        if (power & 1) {
            res = res % mod * base  % mod;
        }
        power /= 2;
        base = base * base % mod;
    }
    return res;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long p, q, c;
        cin >> p >> q >> c;
        cout << "Result = " << modpow(p, q, c) << '\n';
    }
    return 0;
}
