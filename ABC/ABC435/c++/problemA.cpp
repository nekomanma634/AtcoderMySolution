#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

int main(){
	int N;
	cin >> N;
	int res = 0;
	rep(i, N){
		res += i+1;
	}
	cout << res;
	return 0;
}