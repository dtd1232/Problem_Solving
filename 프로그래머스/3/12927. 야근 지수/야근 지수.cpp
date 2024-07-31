#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    
    priority_queue<long long> pq;
    
    for(int i = 0; i < works.size(); ++i){
        pq.push(works[i]);
    }
    
    while(n--){
        int temp = pq.top();
        
        if(temp <= 0){
            return 0;
        }
        
        pq.pop();
        pq.push(temp - 1);
    }
    
    while(!pq.empty()){
        long long temp = pq.top();
        answer += temp * temp;
        pq.pop();
    }
    
    return answer;
}