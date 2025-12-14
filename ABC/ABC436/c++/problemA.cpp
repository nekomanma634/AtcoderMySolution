#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define v(i) vector<i>

int main(){
	int N;
	string S;

	cin >> N >> S;

	int iN = N-S.size();

	for(int i = 0; i < iN; i++){
		S = "o" + S;
	}

	cout << S;
	return 0;
}