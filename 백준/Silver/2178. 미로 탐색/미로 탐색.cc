#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;

string board[101];
int dist[101][101];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int n, m;

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        cin >> board[i];
    }

    for(int i = 0; i < n; ++i){
        fill(dist[i], dist[i] + m, -1);
    }

    queue<pair<int, int> > q;
    q.push({0, 0});
    dist[0][0] = 0;

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 4; ++i){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(dist[nx][ny] > 0 || board[nx][ny] != '1') continue;
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }

    cout << dist[n - 1][m - 1] + 1;

    return 0;
}