#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    cout << triangle.size() << " " << triangle[2].size();
    
    for(int i = triangle.size() - 1; i > 0; --i){
        for(int j = 1; j < triangle[i].size(); ++j){
            triangle[i - 1][j - 1] += max(triangle[i][j - 1], triangle[i][j]);
        }
    }
    
    return triangle[0][0];
}