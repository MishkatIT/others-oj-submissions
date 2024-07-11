/*
    Author    : MishkatIT
*/

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

vector<int> parent, rank_;

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // Path compression
    }
    return parent[x];
}

void unite(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        if (rank_[rootX] > rank_[rootY]) {
            parent[rootY] = rootX;
        } else if (rank_[rootX] < rank_[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank_[rootX]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    parent.resize(n + 1);
    rank_.resize(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
    }

    while (q--) {
        int s, t;
        cin >> s >> t;
        unite(s, t);
    }

    vector<int> result(n + 1);
    for (int i = 1; i <= n; ++i) {
        result[i] = find(i);
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << ' ';
    }
    cout << '\n';

    return 0;
}
