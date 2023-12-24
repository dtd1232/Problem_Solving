#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int room_num;
    vector<int> num_array(10);

    cin >> room_num;

    while (room_num > 0) {
        if ((room_num % 10) == 9) {
            num_array[6]++;
        } else {
            num_array[room_num % 10]++;
        }
        room_num /= 10;
    }
    
    if(num_array[6] % 2 == 0){
        num_array[6] /= 2;
    }else{
        (num_array[6] /= 2)++;
    }

    cout << *max_element(num_array.begin(), num_array.end()) << endl;

    return 0;
}