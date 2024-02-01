//
// Created by 이승용 on 2/1/24.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    queue<int> q;
    int cnt = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    while (1) {
        if (q.size() == 1) {
            cout << q.front();
            break;
        }

        if (cnt % 2 == 0) {
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }

    return 0;
}