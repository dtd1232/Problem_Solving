//
// Created by 이승용 on 2/2/24.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    queue<int> q;
    int n, k, cnt = 1;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    cout << "<";

    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
            cnt++;
        }
        if (q.size() == 1) {
            cout << q.front();
            q.pop();
        } else {
            cout << q.front() << ", ";
            q.pop();
        }
    }

    cout << ">";

    return 0;
}