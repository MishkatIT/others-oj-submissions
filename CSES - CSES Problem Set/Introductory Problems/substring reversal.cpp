/*
    author    : MishkatIT
    created   : Wednesday 2023-07-05-23.30.13
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    while(m--)
    {
      int a, b;
      cin >> a >> b;
      a--;
      reverse(str.begin() + a, str.begin() + b);
    }
    cout << str;
    return 0;
}

