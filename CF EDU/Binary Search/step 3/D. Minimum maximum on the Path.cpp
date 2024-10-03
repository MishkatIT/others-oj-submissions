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
#define int long long
using ll = long long;
using ld = long double;

const ll inf = 1e18;

struct Edge {
    int to, weight;
};

int n, m, d;
vector<vector<Edge>> adj;

bool canReach(int maxWeight) {
    vector<int> dist(n + 1, inf);
    dist[1] = 0;
    deque<int> q;
    q.push_back(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop_front();

        for (auto& edge : adj[u]) {
            if (edge.weight <= maxWeight && dist[edge.to] > dist[u] + 1) {
                dist[edge.to] = dist[u] + 1;
                q.push_back(edge.to);
            }
        }
    }
    return dist[n] <= d;
}

void solve() {
    cin >> n >> m >> d;
    adj.resize(n + 1);

    for (int i = 0; i < m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    // Binary search on the maximum weight of the edges
    int lo = 0, hi = 1e9, ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (canReach(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    if (ans == -1) {
        cout << -1 << '\n';
        return;
    }

    // Reconstruct the path with the maximum weight `ans`
    vector<int> dist(n + 1, inf), parent(n + 1, -1);
    dist[1] = 0;
    deque<int> q;
    q.push_back(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop_front();

        for (auto& edge : adj[u]) {
            if (edge.weight <= ans && dist[edge.to] > dist[u] + 1) {
                dist[edge.to] = dist[u] + 1;
                parent[edge.to] = u;
                q.push_back(edge.to);
            }
        }
    }

    vector<int> path;
    for (int v = n; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    cout << path.size() - 1 << '\n';
    for (int v : path) {
        cout << v << ' ';
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
