
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
    void pointUpdate(int node, int s, int e, int pos, int val)
    {
        if (e < pos || s > pos) return;
        if (s == e) {
            tree[node] = val;
            return;
        }
        int mid = (s + e) / 2;
        pointUpdate(2 * node, s, mid, pos, val);
        pointUpdate(2 * node + 1, mid + 1, e, pos, val);
        tree[node] = min (tree[2 * node], tree[2 * node + 1]);
    }
    ll query(int l, int r)
    {
        return range_query(1, 0, n - 1, l - 1, r - 1);
    }
    void update(int pos, int val)
    {
        pointUpdate(1, 0, n - 1, pos - 1, val);
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
        int type, a, b;
        cin >> type >> a >> b;
        if (type == 1) {
            st.update(a, b);
        } else {
            cout << st.query(a, b) << '\n';
        }
    }
    return 0;
}



