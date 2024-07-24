#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isCorrect(string str){
    stack<char> s;
    
    for(auto c : str){
        if(c == '('){
            s.push(c);
        }else if(s.empty()){
            return false;
        }else{
            s.pop();
        }
    }
    
    return true;
}

string solution(string p) {
    string answer = "";
    
    if(p.empty()){
        return p;
    }
    
    string u = "";
    string v = "";
    int cnt = 0;
    
    for(int i = 0; i < p.length(); ++i){
        if(p[i] == '('){
            cnt++;
        }else{
            cnt--;
        }
        
        if(cnt == 0){
            u = p.substr(0, i + 1);
            v = p.substr(i + 1);
            break;
        }
    }
    
    if(isCorrect(u)){
        answer = u + solution(v);
    }else{
        answer = "(" + solution(v) + ")";
        
        for(int i = 1; i < u.length() - 1; ++i){
            if (u[i] == '(') {
                answer += ')';
            } else {
                answer += '(';
            }
        }
    }
    
    return answer;
}