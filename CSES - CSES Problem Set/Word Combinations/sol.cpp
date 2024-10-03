/*
    Author    : MishkatIT
    Created   : Wednesday 25-09-2024 21:36:31
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

class TrieNode {
public:
    bool isEnd;
    TrieNode* child[26];
    TrieNode() {
        isEnd = false;
        fill(begin(child), end(child), nullptr);
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode;
    }

    int getIdx(char c) {
        return c - 'a';
    }

    void insert(string& str) {
        TrieNode* node = root;
        for (auto& c : str) {
            int idx = getIdx(c);
            if (!node->child[idx]) {
                node->child[idx] = new TrieNode;
            }
            node = node->child[idx];
        }
        node->isEnd = true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    Trie trie;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        string x;
        cin >> x;
        trie.insert(x);
    }
    int n = str.size();
    vector<int> dp(n + 5);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--) {
        TrieNode* node = trie.root;
        for (int j = i; j < n; j++) {
            int idx = trie.getIdx(str[j]);
            if (!node->child[idx]) break;
            node = node->child[idx];
            if (node->isEnd) {
                dp[i] += dp[j + 1] % mod;
                dp[i] %= mod;
            }
        }
    }
    cout << dp[0] << '\n';
    return 0;
}