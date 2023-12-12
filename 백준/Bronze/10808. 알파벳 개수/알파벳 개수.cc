#include <iostream>

using namespace std;

int main() {
    int answer[26] = {0};
    string input_word;
    cin >> input_word;

    for (int i = 0; i < input_word.size(); i++) {
        answer[input_word[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        cout << answer[i] << ' ';
    }

    return 0;
}