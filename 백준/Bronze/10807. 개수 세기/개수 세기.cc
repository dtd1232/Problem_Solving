#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> m;
    int n;

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        m[temp]++;
    }

    cin >> n;

    cout << m[n];

    return 0;
}