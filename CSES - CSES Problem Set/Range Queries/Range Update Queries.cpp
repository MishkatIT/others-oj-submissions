/*
    author    : MishkatIT
    created   : Monday 2024-03-25-01.01.53
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
    }
    void range_update(int node, int s, int e, int l, int r, int val)
    {
        if (s > r || e < l) return;
        if (l <= s && e <= r) {
            tree[node] += val;
            return;
        }
        int mid = (s + e) / 2;
        range_update(2 * node, s, mid, l, r, val);
        range_update(2 * node + 1, mid + 1, e, l, r, val);
    }
    ll range_query(int node, int s, int e, int pos)
    {
        if (s > pos || pos > e) return 0;
        if (s == e) {
            return tree[node];
        }
        if (tree[node] != 0) {
            tree[2 * node] += tree[node];
            tree[2 * node + 1] += tree[node];
            tree[node] = 0;
        }
        int mid = (s + e) / 2;
        return range_query(2 * node, s, mid, pos) + range_query(2 * node + 1, mid + 1, e, pos);
    }
    void update(int l, int r, int val)
    {
        range_update(1, 0, n - 1, l - 1, r - 1, val);
    }
    ll query(int pos)
    {
        return range_query(1, 0, n - 1, pos - 1);
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
        int type;
        cin >> type;
        if (type == 1) {
            int a, b, u;
            cin >> a >> b >> u;
            st.update(a, b, u);
        } else {
            int pos;
            cin >> pos;
            cout << st.query(pos) << '\n';
        }
    }
    return 0;
}


