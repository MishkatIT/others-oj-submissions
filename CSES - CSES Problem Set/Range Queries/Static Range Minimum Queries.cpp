/*
    author    : MishkatIT
    created   : Sunday 2024-03-24-23.54.20
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


class segmentTree
{
public:
    int n;
    vector<ll> tree;
    segmentTree(vector<int>& v)
    {
        n = v.size();
        tree.resize(4 * n);
        build(v, 1, 0, n - 1);
    }

    void build(vector<int>& v, int node, int s, int e)
    {
        if (s == e) {
            tree[node] = v[s];
            return;
        }
        int mid = (s + e) / 2;
        build(v, 2 * node, s, mid);
        build(v, 2 * node + 1, mid + 1, e);
        tree[node] = min (tree[2 * node], tree[2 * node + 1]);
    }
    ll range_query(int node, int s, int e, int l, int r)
    {
        if (e < l || s > r) return inf;
        if (l <= s && e <= r) return tree[node];
        int mid = (s + e) / 2;
        return min(range_query(2 * node, s, mid, l, r), range_query(2 * node + 1, mid + 1, e, l, r));
    }
    ll query(int l, int r)
    {
        return range_query(1, 0, n - 1, l - 1, r - 1);
    }
};

int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    segmentTree st(v);
    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << st.query(a, b) << '\n';
    }
    return 0;
}



