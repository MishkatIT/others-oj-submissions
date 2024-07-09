/*
    author    : MishkatIT
    created   : Monday 2024-04-15-17.57.58
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    const int mod = 1e9 + 7;
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int dp[n][n];
    memset(dp, 0, sizeof dp);
    dp[n - 1][n - 1] = (a[n - 1][n - 1] == '.');
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (a[i][j] != '*') {
                if (i + 1 < n) {
                    dp[i][j] += dp[i + 1][j];
                }
                if (j + 1 < n) {
                    dp[i][j] += dp[i][j + 1];
                }
                dp[i][j] %= mod;
            }
        }
    }
    cout << dp[0][0];
    return 0;
}
