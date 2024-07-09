/*
    author    : MishkatIT
    created   : Sunday 2024-02-25-19.57.59
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

struct x {
    int s, e, pos;
};

int main()
{
    fio;
    int n;
    cin >> n;
    vector<x> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].s >> v[i].e;
        v[i].pos = i;
    }
    sort(v.begin(), v.end(), [&](auto a, auto b) {
        return a.s < b.s;
    });
    vector<int> ans(n);
    int room = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // endTime, roomNo
    for (int i = 0; i < n; i++) {
        if (pq.empty() || pq.top().first >= v[i].s) {
            pq.push({v[i].e, room});
            ans[v[i].pos] = room;
            room++;
        } else {
            int temp = pq.top().second;
            pq.pop();
            pq.push({v[i].e, temp});
            ans[v[i].pos] = temp;
        }
    }
    cout << room - 1 << '\n';
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}


