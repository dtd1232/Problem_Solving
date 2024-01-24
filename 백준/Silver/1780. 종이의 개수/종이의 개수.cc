#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > v;
vector<int> v2;
int cnt[3] = {};

void divCon(int row, int col, int len){
    int zero_cnt = 0;
    int one_cnt = 0;
    for(int i = row; i < row + len; i++){
        for(int j = col; j < col + len; j++){
            if(v[i][j] == 0){
                zero_cnt++;
            }else if(v[i][j] == 1){
                one_cnt++;
            }else{
                continue;
            }
        }
    }

    if(zero_cnt == 0 && one_cnt == 0){
        cnt[0]++;
    }else if(zero_cnt == len*len){
        cnt[1]++;
    }else if(one_cnt == len*len){
        cnt[2]++;
    }else{
        /*
        | 1 | 2 | 3 |
        | 4 | 5 | 6 |
        | 7 | 8 | 9 |
        */
        divCon(row, col, len/3); // 1
        divCon(row, col + len/3, len/3); // 2
        divCon(row, col + len/3 + len/3, len/3); // 3
        divCon(row + len/3, col, len/3); // 4
        divCon(row + len/3, col + len/3, len/3); // 5
        divCon(row + len/3, col + len/3 + len/3, len/3); // 6
        divCon(row + len/3 + len/3, col, len/3); // 7
        divCon(row + len/3 + len/3, col + len/3, len/3); // 8
        divCon(row + len/3 + len/3, col + len/3 + len/3, len/3); // 9
    }

    return;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int input;
            cin >> input;
            v2.push_back(input);
        }
        v.push_back(v2);
        v2.clear();
    }

    divCon(0, 0, n);

    for(int i = 0; i < 3; i++){
        cout << cnt[i] << "\n";
    }

    return 0;
}