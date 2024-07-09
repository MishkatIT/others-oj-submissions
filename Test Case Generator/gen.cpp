// this is test case generator
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());

void generate(int currentNum) {
    string folder = "testcases/";
    ofstream inFile(folder + to_string(currentNum) + ".in");



    //modify from here
    int n = N;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = rnd() % 1000; 
        inFile << v[i] << " ";
    }
    inFile << '\n';
    // end of modifications


    inFile.close();
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase = 15;
    for (int t = 0; t < testCase; t++) {
        generate(t + 10);
    }

    return 0;
}
