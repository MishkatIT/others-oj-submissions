/*
    Author    : MishkatIT
    Created   : Sunday 11-08-2024 03:18:23
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase = 1;

    while (true) {
        int t;
        cin >> t;
        if (t == 0) break;

        map<int, deque<int>> teamQueues;
        map<int, int> teamOf;
        deque<int> teamOrder;

        for (int i = 0; i < t; ++i) {
            int n;
            cin >> n;
            while (n--) {
                int x;
                cin >> x;
                teamOf[x] = i;
            }
        }

        cout << "Scenario #" << testCase++ << "\n";
        while (true) {
            string cmd;
            cin >> cmd;
            if (cmd == "STOP")
                break;
            if (cmd == "ENQUEUE") {
                int x;
                cin >> x;
                int team = teamOf[x];
                if (teamQueues[team].empty()) {
                    teamOrder.push_back(team);
                }
                teamQueues[team].push_back(x);
            } else if (cmd == "DEQUEUE") {
                int frontTeam = teamOrder.front();
                cout << teamQueues[frontTeam].front() << "\n";
                teamQueues[frontTeam].pop_front();
                if (teamQueues[frontTeam].empty()) {
                    teamOrder.pop_front();
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
