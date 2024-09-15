#include <string>
#include <vector>

using namespace std;

int countOne(int n){
    int cnt = 0;
    
    while(n != 0){
        if(n % 2 == 1){
            cnt++;
        }
        
        n /= 2;
    }
    
    return cnt;
}

int solution(int n) {
    int cnt = countOne(n);
    
    while(true){
        n++;
        int temp = countOne(n);
        
        if(temp == cnt){
            break;
        }
    }
    
    return n;
}