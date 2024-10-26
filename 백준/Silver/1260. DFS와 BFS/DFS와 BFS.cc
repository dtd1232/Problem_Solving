#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

vector<vector<int>> vec(1001);
vector<int> dfs_order, bfs_order;
bool vis[1001];

void dfs(int cur){
    vis[cur] = true;
    dfs_order.push_back(cur);

    for(int &nxt : vec[cur]){
        if(!vis[nxt]){
            dfs(nxt);
        }
    }
}

void bfs(int src){
    queue<int> q;
    vis[src] = true;
    q.push(src);

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        bfs_order.push_back(cur);

        for(int &nxt : vec[cur]){
            if(!vis[nxt]){
                vis[nxt] = true;
                q.push(nxt);
            }
        }
    }
}

int main(){
    int n, m, v;

    cin >> n >> m >> v;

    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int i = 1; i <= n; ++i){
        sort(vec[i].begin(), vec[i].end());
    }

    memset(vis, false, sizeof(vis));
    dfs(v);
    memset(vis, false, sizeof(vis));
    bfs(v);

    for(int &i : dfs_order){
        cout << i << ' ';
    }

    cout << "\n";

    for(int &i : bfs_order){
        cout << i << ' ';
    }

    cout << "\n";

    return 0;
}