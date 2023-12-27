#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int array_size, target, input_num;
    cin >> array_size;
    vector<int> vec;

    for (int i = 0; i < array_size; i++) {
        cin >> input_num;
        vec.push_back(input_num);
    }

    cin >> target;

    sort(vec.begin(), vec.end());

    int l = 0;
    int r = array_size - 1;
    int answer = 0;

    while (1) {
        if (l >= r) {
            break;
        }
        int sum = vec[l] + vec[r];
        if (sum == target) {
            l++;
            r--;
            answer++;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }

    cout << answer;

    return 0;
}