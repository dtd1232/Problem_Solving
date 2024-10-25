#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> vec(105);
vector<bool> visited(105);

void dfs(int cur){
    visited[cur] = true;

    for(int nxt : vec[cur]){
        if(!visited[nxt]){
            dfs(nxt);
        }
    }
}

int main(){
    int n = 0, m = 0;

    cin >> n >> m;

    for(int i = 0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    dfs(1);

    int ans = 0;

    for(int i = 1; i <= n; ++i){
        ans += visited[i];
    }

    cout << ans - 1;

    return 0;
}