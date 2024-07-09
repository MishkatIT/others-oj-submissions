/*
    author    : MishkatIT
    created   : Saturday 2023-09-30-19.17.42
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

int main()
{

    int low = 0, high = 1000000;
    int ans;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        cout << mid << endl;
        string x;
        cin >> x;
        if (x == "Bigger") {
            low = mid + 1;
        } else if(x == "Smaller") {
            high = mid - 1;
        } else {
            break;
        }
    }
    return 0;
}