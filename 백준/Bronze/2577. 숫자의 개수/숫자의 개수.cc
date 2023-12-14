#include <iostream>

using namespace std;

int main() {
    int input[3] = {0};
    int answer[10] = {0};

    for (int i = 0; i < 3; i++) {
        cin >> input[i];
    }

    int multiple_result = input[0] * input[1] * input[2];
    string str = to_string(multiple_result);

    for (int i = 0; i < str.size(); i++) {
        answer[multiple_result % 10]++;
        multiple_result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}