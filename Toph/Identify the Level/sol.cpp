/*
    author    : MishkatIT
    created   : Friday 2023-08-11-22.16.13
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;
vector<int> mem(100000 + 10);
void bfs(int start, int node)
{
    queue<pair<int, int>> q;
    int level = 1;
    q.push({start, level});
    while(!q.empty()) {
        level = q.front().second;
        mem[q.front().first] = level;
        int left = q.front().first * 2;
        int right = left + 1;
        if(left <= node) {
            q.push({left, level + 1});
        }
        if(right <= node) {
            q.push({right, level + 1});
        }
        q.pop();
    }
}


int main()
{
    fio;
    int t;
    cin >> t;
    bfs(1, 100000 + 5);
    for (int i = 1; i <= t; i++) {
        int node;
        cin >> node;
        cout << "Case " << i << ": " << mem[node] << '\n';
    }
    return 0;
}
