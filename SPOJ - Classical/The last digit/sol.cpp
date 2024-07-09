/*
    author    : MishkatIT
    created   : Friday 2023-10-27-03.14.25
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        if(b == 0) {
          cout << 1 << '\n';
          continue;
        }
        b %= 4;
        if (b == 0) b = 4;
        cout << (ll)pow(a, b) % 10 << '\n';
    }
    return 0;
}
