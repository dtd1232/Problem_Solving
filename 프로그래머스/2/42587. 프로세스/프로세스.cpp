#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    // first: location, second: priorities
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i = 0; i < priorities.size(); ++i){
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    while(true){
        if(q.front().second != pq.top()){
            q.push(q.front());
            q.pop();
        }else{
            if(q.front().first == location){
                answer++;
                break;
            }else{
                answer++;
                pq.pop();
                q.pop();
            }
        }
    }
    
    return answer;
}