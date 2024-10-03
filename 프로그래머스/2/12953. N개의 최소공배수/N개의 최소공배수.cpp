#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i = 1; i < arr.size(); ++i){
        int gcd = __gcd(answer, arr[i]);
        int ldm = answer * arr[i] / gcd;
        answer = ldm;
    }
    
    return answer;
}