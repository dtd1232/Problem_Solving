#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> stack;
    vector<char> answer;
    int num;
    cin >> num;

    int push_cnt = 1;

    for (int i = 0; i < num; i++) {
        int target;
        cin >> target;
        while (push_cnt <= target) {
            stack.push_back(push_cnt);
            push_cnt++;
            answer.push_back('+');
        }
        
        if(target != stack.back()){
            cout << "NO" << endl;
            return 0;
        }
        stack.pop_back();
        answer.push_back('-');
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }

    return 0;
}