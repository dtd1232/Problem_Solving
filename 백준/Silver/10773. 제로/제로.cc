#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_of_commands;
    cin >> num_of_commands;

    vector<int> vec;
    int answer = 0;

    for (int i = 0; i < num_of_commands; i++) {
        int input_num;
        cin >> input_num;
        if (input_num == 0) {
            vec.pop_back();
        } else {
            vec.push_back(input_num);
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        answer += vec[i];
    }

    cout << answer << endl;

    return 0;
}