#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0, sum = 0;
    int len = tangerine.size();
    map<int, int> m;
    
    for(int i : tangerine){
        m[i]++;
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    
    sort(v.begin(), v.end(), comp);
    
    for(int i = 0; i < len; ++i){
        if(sum >= k){
            break;
        }else{
            sum += v[i].second;
            answer++;
        }
    }
    
    return answer;
}