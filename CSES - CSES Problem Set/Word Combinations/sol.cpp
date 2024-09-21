/*
    Author    : MishkatIT
    Date      : 2024-09-19
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
const double eps = 1e-9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> sheets(n, vector<int>(k));
    map<int, vector<int>> numToPlayers;
    
    // Read the input sheets
    for (int i = 0; i < n; ++i) {
        for (auto(& j) : sheets[i]) {
            cin >> j;
            numToPlayers[j].push_back(i);
        }
    }
    
    vector<double> lastProb(n, 0.0);
    
    // For each number in numToPlayers map, compute the probabilities
    for (auto(& entry) : numToPlayers) {
        auto& players = entry.second;
        int totalPlayers = players.size();
        for (int i = 0; i < totalPlayers; ++i) {
            lastProb[players[i]] += 1.0 / totalPlayers;
        }
    }
    
    // Normalize to make sure probabilities sum to 1
    double sum = accumulate(lastProb.begin(), lastProb.end(), 0.0);
    for (auto(& prob) : lastProb) {
        printf("%.9f\n", prob / sum);
    }
    
    return 0;
}
