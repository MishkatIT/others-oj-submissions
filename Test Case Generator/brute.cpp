// this is bruteforce solution. 
#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string folder = "testcases/";
    
    for (int fileNum = 10; ; fileNum++) {
        ifstream inFile(folder + to_string(fileNum) + ".in");
        if (!inFile.is_open()) break;

        ofstream ansFile(folder + to_string(fileNum) + ".ans");

        int n;
        inFile >> n;
        ansFile << n << '\n';

        inFile.close();
        ansFile.close();
    }

    return 0;
}
