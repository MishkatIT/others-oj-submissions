// this is bruteforce solution. 
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string folder = "testcases/";
    
    for (int fileNum = 10; ; fileNum++) {
        ifstream inFile(folder + to_string(fileNum) + ".in");
        if (!inFile.is_open()) break;

        ofstream ansFile(folder + to_string(fileNum) + ".ans");

        int n, k, m;
        inFile >> n >> k >> m;
        vector<string> lan(n);
        for (auto& i : lan) inFile >> i;
        vector<int> cost(n);
        for (auto& i : cost) inFile >> i;
        for (int i = 0; i < k; i++) {
            int len;
            inFile >> len;
            vector<int> temp(len);
            for (auto& val : temp) {
                inFile >> val;
            }
            int mn = inf;
            for (auto& x : temp) {
                mn = min(mn, cost[x - 1]);
            }
            for (auto& x : temp) {
                cost[x - 1] = mn;
            }
        }
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            mp[lan[i]] = cost[i];
        }
        ll ans = 0;
        for (int i = 0; i < m; i++) {
            string x;
            inFile >> x;
            ans += mp[x];
        }
        ansFile << ans << '\n';

        inFile.close();
        ansFile.close();
    }

    return 0;
}
