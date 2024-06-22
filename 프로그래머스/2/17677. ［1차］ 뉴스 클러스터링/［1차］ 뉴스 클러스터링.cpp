#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    vector<string> s1;
    vector<string> s2;
    
    map<string, int> m1;
    map<string, int> m2;
    
    for(int i = 1; i < str1.length(); ++i){
        string temp = "";
        if(isalpha(str1[i - 1]) && isalpha(str1[i])){
            temp += tolower(str1[i - 1]);
            temp += tolower(str1[i]);
            
            if(m1.find(temp) != m1.end()){
                m1[temp]++;
            }else{
                m1[temp] = 1;
            }
        }
    }
    
    for(int i = 1; i < str2.length(); ++i){
        string temp = "";
        if(isalpha(str2[i - 1]) && isalpha(str2[i])){
            temp += tolower(str2[i - 1]);
            temp += tolower(str2[i]);
            
            if(m2.find(temp) != m2.end()){
                m2[temp]++;
            }else{
                m2[temp] = 1;
            }
        }
    }
    
    int union_count = 0;
    int inter_count = 0;
    
    map<string, int> union_map;
    
    for(auto s1 : m1){
        if(m2.find(s1.first) != m2.end()){
            inter_count += min(m2[s1.first], s1.second);
            union_count += max(m2[s1.first], s1.second);
            union_map[s1.first] = 0;
        }else{
            union_count += s1.second;
        }
        
    }
    
    for(auto s2 : m2){
        if(union_map.find(s2.first) == union_map.end()){
            union_count += s2.second;
        }
    }

    if(union_count == 0){
        answer = 65536;
    }else{
        answer = int(float(inter_count) / float(union_count) * 65536.0f);
    }
    
    return answer;
}