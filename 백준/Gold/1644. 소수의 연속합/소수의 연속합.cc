#include <iostream>
#include <vector>

using namespace std;

const int maxN = 4000002;
vector<bool> seive(maxN, true);
vector<int> primes;

int main(){
    for(int i = 2; i * i < maxN; ++i){
        if(!seive[i]) continue;
        for(int j = i * i; j < maxN; j += i){
            seive[j] = false;
        }
    }

    for(int i = 2; i < maxN; ++i){
        if(seive[i]){
            primes.push_back(i);
        }
    }

    primes.push_back(0);

    int target, s = 0, e = 1, ans = 0, tempSum = primes[0];
    cin >> target;

    while(1){
        if(tempSum == target) ans++;
        if(tempSum <= target) tempSum += primes[e++];
        if(tempSum > target) tempSum -= primes[s++];
        if(e == primes.size()) break;
    }

    cout << ans;

    return 0;
}