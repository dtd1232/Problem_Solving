#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> sum_set;
    
    for(int i = 0; i < elements.size(); ++i){
        int sum = 0;
        for(int j = i; j < i + elements.size(); ++j){
            int idx = j % elements.size();
            sum += elements[idx];
            sum_set.emplace(sum);
        }
    }
    
    answer = sum_set.size();
    
    return answer;
}