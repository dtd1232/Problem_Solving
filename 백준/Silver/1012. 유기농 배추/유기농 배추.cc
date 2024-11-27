#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k;
int board[51][51];
bool vis[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs(int x, int y){
    vis[x][y] = true;
    q.push({x, y});
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        for(int dir = 0; dir < 4; ++dir){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cin >> m >> n >> k;
        int x, y;
        for(int i = 0; i < k; ++i){
            cin >> x >> y;
            board[y][x] = 1;
        }

        int cnt = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(board[i][j] == 1 && !vis[i][j]){
                    bfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";
        
        for(int i = 0; i < n; ++i){
            fill(board[i], board[i] + m, 0);
            fill(vis[i], vis[i] + m, false);
        }
    }

    return 0;
}