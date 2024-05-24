#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    int max_cnt = 0;

    while(n > 1){
        n = sqrt(n);
        max_cnt++;
    }
    
    while(true){
        a = a / 2 + a % 2;
        b = b / 2 + b % 2;
        if(a == b){
            break;
        }
        answer++;
    }

    return answer;
}