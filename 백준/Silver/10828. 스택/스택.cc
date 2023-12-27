#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num_of_commands = 0;

    cin >> num_of_commands;

    vector<int> vec;
    string command;
    int push;

    for (int i = 0; i < num_of_commands; i++) {
        cin >> command;
        if (command == "push") {
            cin >> push;
            vec.push_back(push);
        } else if (command == "pop") {
            if (vec.empty()) {
                cout << -1 << endl;
            } else {
                int temp_for_vec_back;
                temp_for_vec_back = vec.back();
                vec.pop_back();
                cout << temp_for_vec_back << endl;
            }
        } else if (command == "size") {
            cout << vec.size() << endl;
        } else if (command == "empty") {
            if (vec.empty()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else if (command == "top") {
            if (vec.empty()) {
                cout << -1 << endl;
            } else {
                cout << vec.back() << endl;
            }
        } else {
            continue;
        }
    }

    return 0;
}