/*
    author    : MishkatIT
    created   : Thursday 2024-02-22-00.26.09
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

int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<int> pos(n + 5, inf), v(n + 5);
    pos[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }
    int inv = 1; // inversion
    for (int i = 1; i + 1 <= n; i++) {
        if (pos[i] > pos[i + 1]) {
            inv++;
        }
    }



    while(m--) {
        int a, b;
        cin >> a >> b;
        if (v[a] > v[b]) swap(a, b);

        if (pos[v[a] - 1] > pos[v[a]]) inv--;
        if (pos[v[a]] > pos[v[a] + 1]) inv--;
        if (v[b] - 1 != v[a]) {
            if (pos[v[b] - 1] > pos[v[b]]) inv--;
        }
        if (pos[v[b]] > pos[v[b] + 1]) inv--;

        swap(pos[v[a]], pos[v[b]]);
        swap(v[a], v[b]);

        if (v[a] > v[b]) swap(a, b);

        if (pos[v[a] - 1] > pos[v[a]]) inv++;
        if (pos[v[a]] > pos[v[a] + 1]) inv++;
        if (v[b] - 1 != v[a]) {
            if (pos[v[b] - 1] > pos[v[b]]) inv++;
        }
        if (pos[v[b]] > pos[v[b] + 1]) inv++;

        cout << inv << '\n';
    }

    return 0;
}


