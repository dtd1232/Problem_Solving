#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define fastcpp ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

int main(){
	fastcpp;

	int n;
	char game;
	cin >> n >> game;

	set<string> ans;

	for(int i = 0; i < n; i++){
		string temp;
		cin >> temp;
		ans.insert(temp);
	}

	if(game == 'Y'){
		cout << ans.size();
	}else if(game == 'F'){
		cout << ans.size() / 2;
	}else if(game == 'O'){
		cout << ans.size() / 3;
	}

	return 0;
}