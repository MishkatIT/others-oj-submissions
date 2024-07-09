/*
    author    : MishkatIT
    created   : Tuesday 2024-03-26-02.54.02
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

vector<ll> tree;
int ans;

class segmentTree
{
public:
    int n;
    segmentTree(vector<ll>& v)
    {
        n = v.size();
        tree.resize(4 * n);
        build(v, 1, 0, n - 1);
    }

    void build(vector<ll>& v, int node, int s, int e)
    {
        if (s == e) {
            tree[node] = v[s];
            return;
        }
        int mid = (s + e) / 2;
        build(v, 2 * node, s, mid);
        build(v, 2 * node + 1, mid + 1, e);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }


    void range_query(int node, int s, int e, int target)
    {
        if (tree[node] < target) return;
        if (s == e) {
            if (tree[node] >= target && ans == 0) {
                tree[node] -= target;
                ans = s + 1;
            }
            return;
        }
        int mid = (s + e) / 2;
        range_query(2 * node, s, mid, target);
        if (ans != 0) return;
        range_query(2 * node + 1, mid + 1, e, target);
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }

    void query(int target)
    {
        range_query(1, 0, n - 1, target);
    }

};


int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    segmentTree st(v);
    while(m--) {
        int r;
        cin >> r;
        ans = 0;
        st.query(r);
        cout << ans << ' ';
    }
    return 0;
}


