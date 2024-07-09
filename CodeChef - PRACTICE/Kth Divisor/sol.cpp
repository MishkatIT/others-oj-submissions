/*
    author    : MishkatIT
    created   : Thursday 2022-11-17-21.58.06
    problem   : RNT013 kth divisor
*/
#include<iostream>
#include<set>
#define int long long
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

set<int>s;

void divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if((n % i) == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
//    cout << s.size() << ' ';
}

signed main()
{
    fio;
    long long n, k;
    cin >> n >> k;
    divisors(n);
    if(s.size() < k)
        cout << -1;
    else
    {
        int cnt = 0;
        for (auto i: s)
        {
            cnt++;
            if (cnt == k)
        {
            cout << i;
            break;
        }
    }
}

return 0;
}


